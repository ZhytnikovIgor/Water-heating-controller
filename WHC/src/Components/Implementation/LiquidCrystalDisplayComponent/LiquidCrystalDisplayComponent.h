#pragma once
#include <stdint.h>
#include <Arduino.h>
#include <TouchScreen.h>
#include <Adafruit_TFTLCD.h>
#include "..\..\Interfaces\ILiquidCrystalDisplayComponent.h"

class LiquidCrystalDisplayComponent : public ILiquidCrystalDisplayComponent
{
  private:
    int _displayWidth;
    int _displayHeight;
    long _xMinimum;
    long _xMaximum;
    long _yMinimum;
    long _yMaximum;
    TouchScreen _touchScreen;
    Adafruit_TFTLCD _liquidCrystalDisplay;

  public:
    LiquidCrystalDisplayComponent(int displayWidth,
                                  int displayHeight,
                                  long xMinimum,
                                  long xMaximum,
                                  long yMinimum,
                                  long yMaximum,
                                  uint8_t firstDigitalPinNumber,
                                  uint8_t readPinNumber,
                                  uint8_t writePinNumber,
                                  uint8_t registerSelectPinNumber,
                                  uint8_t chipSelectPinNumber,
                                  uint8_t resetPinNumber,
                                  uint8_t secondDigitalPinNumber,
                                  uint16_t receivingPlate,
                                  uint16_t port);
    bool IsTouchScreenPressed();
    Point GetTouchPoint(PageDirection direction);
    void SetRotation(PageDirection direction);
    void FillScreen(uint16_t color);
    void FillRectangle(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color);
    void DrawRectangle(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color);
    void SetCursor(uint8_t column, uint8_t row);
    void SetTextColor(uint16_t color);
    void SetTextSize(uint8_t size);
    void PrintText(String text);
};