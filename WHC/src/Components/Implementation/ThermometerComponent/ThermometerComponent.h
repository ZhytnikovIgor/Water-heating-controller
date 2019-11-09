#pragma once
#include <OneWire.h>
#include <DallasTemperature.h>
#include "..\..\Interfaces\IThermometerComponent.h"
#include "..\..\..\Infrastructure\Enumerations\ThermometerAccuracy.h"

class ThermometerComponent : public IThermometerComponent
{
private:
    DallasTemperature _sensor;
    uint8_t *_deviceAddress;

public:
    ThermometerComponent(OneWire *oneWire, DeviceAddress deviceAddress, ThermometerAccuracy accuracy);
    float GetTemperature();
    bool IsAvailable();
};