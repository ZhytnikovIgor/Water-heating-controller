#define BLACK 0x0000
#define BLUE 0x001F
#define RED 0xF800
#define GREEN 0x07E0
#define CYAN 0x07FF
#define MAGENTA 0xF81F
#define YELLOW 0xFFE0
#define WHITE 0xFFFF

#include "src\Components\Interfaces\ILiquidCrystalDisplayComponent.h"
#include "src\Components\Implementation\LiquidCrystalDisplayComponent\LiquidCrystalDisplayComponent.h"
#include "src\Infrastructure\Enumerations\PageDirection.h"
#include "src\Services\Interfaces\ILiquidCrystalDisplayService.h"
#include "src\Services\Implementation\LiquidCrystalDisplayService\LiquidCrystalDisplayService.h"

#include "src\Managers\Interfaces\IPageManager.h"
#include "src\Managers\Implementation\PageManager\PageManager.h"

#include "src\Components\Interfaces\IThermometerComponent.h"
#include "src\Components\Implementation\ThermometerComponent\ThermometerComponent.h"
#include "src\Services\Interfaces\IThermometerService.h"
#include "src\Services\Implementation\ThermometerService\ThermometerService.h"

#include "src\Infrastructure\Enumerations\ThermometerAccuracy.h"

#include "src\Components\Interfaces\IClockComponent.h"
#include "src\Components\Implementation\ClockComponent\ClockComponent.h"
#include "src\Services\Interfaces\IClockService.h"
#include "src\Services\Implementation\ClockService\ClockService.h"

OneWire oneWire(49);

IThermometerComponent *tc1;
IThermometerComponent *tc2;
IThermometerComponent *tc3;

IThermometerService *ts1;
IThermometerService *ts2;
IThermometerService *ts3;

ILiquidCrystalDisplayComponent *lcd;
ILiquidCrystalDisplayService *lcs;

IClockComponent *cc;
IClockService *cs;

IPageManager *pm;

void setup()
{
    Serial.begin(115200);
    lcd = new LiquidCrystalDisplayComponent(320,
                                            240,

                                            140, //120,
                                            950, //960,
                                            115, //120,
                                            900, //920,

                                            9,

                                            A0,
                                            A1,
                                            A2,
                                            A3,
                                            A4,

                                            8,
                                            300,

                                            0x9341);

    lcs = new LiquidCrystalDisplayService(lcd);

    tc1 = new ThermometerComponent(&oneWire, new DeviceAddress{0x28, 0x0C, 0x01, 0x07, 0xFD, 0xD4, 0x01, 0x88}, ThermometerAccuracy::HalfDegree);
    tc2 = new ThermometerComponent(&oneWire, new DeviceAddress{0x28, 0xFF, 0xB0, 0x36, 0x30, 0x17, 0x04, 0x7B}, ThermometerAccuracy::HalfDegree);
    tc3 = new ThermometerComponent(&oneWire, new DeviceAddress{0x28, 0xFF, 0xF7, 0x0E, 0x81, 0x14, 0x02, 0x08}, ThermometerAccuracy::HalfDegree);

    ts1 = new ThermometerService(tc1);
    ts2 = new ThermometerService(tc2);
    ts3 = new ThermometerService(tc3);

    cc = new ClockComponent(104);
    cs = new ClockService(cc);

    pm = new PageManager(lcs, ts1, ts2, ts3, cs);
}

void loop()
{
    pinMode(A2, OUTPUT);
    pinMode(A3, OUTPUT);

    pm->RenderCurrentPage();
    if (lcs->IsTouchScreenPressed())
    {
        Serial.println("Pressed");
        Point tp = lcs->GetRawTouchPoint();
        pm->HandleCurrentPageTouch(tp);
    }

    // delay(1000);
}