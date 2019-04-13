#include "LiquidCrystalDisplayComponent.h"

LiquidCrystalDisplayComponent::LiquidCrystalDisplayComponent(int displayWidth,
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
                                                             uint16_t port) : _displayWidth(displayWidth),
                                                                              _displayHeight(displayHeight),
                                                                              _xMinimum(xMinimum),
                                                                              _xMaximum(xMaximum),
                                                                              _yMinimum(yMinimum),
                                                                              _yMaximum(yMaximum),
                                                                              _touchScreen(firstDigitalPinNumber,
                                                                                           registerSelectPinNumber,
                                                                                           chipSelectPinNumber,
                                                                                           secondDigitalPinNumber,
                                                                                           receivingPlate),
                                                                              _liquidCrystalDisplay(chipSelectPinNumber,
                                                                                                    registerSelectPinNumber,
                                                                                                    writePinNumber,
                                                                                                    readPinNumber,
                                                                                                    resetPinNumber)
{
    _liquidCrystalDisplay.begin(port);
}
bool LiquidCrystalDisplayComponent::IsTouchScreenPressed()
{
    return _touchScreen.getPoint().z > _touchScreen.pressureThreshhold;
}
Point LiquidCrystalDisplayComponent::GetTouchPoint(PageDirection direction)
{
    TSPoint touchPoint = _touchScreen.getPoint();
    Point resultTouchPoint;

    switch (direction)
    {
    case PageDirection::Row:
        resultTouchPoint = Point(map(touchPoint.y, _yMinimum, _yMaximum, 0, _displayHeight - 1),
                                 map(touchPoint.x, _xMaximum, _xMinimum, 0, _displayWidth - 1),
                                 touchPoint.z);
        break;
    case PageDirection::RowReverse:
        resultTouchPoint = Point(map(touchPoint.y, _yMaximum, _yMinimum, 0, _displayHeight - 1),
                                 map(touchPoint.x, _xMinimum, _xMaximum, 0, _displayWidth - 1),
                                 touchPoint.z);
        break;
    case PageDirection::Column:
        resultTouchPoint = Point(map(touchPoint.x, _xMaximum, _xMinimum, 0, _displayWidth - 1),
                                 map(touchPoint.y, _yMaximum, _yMinimum, 0, _displayHeight - 1),
                                 touchPoint.z);
        break;
    case PageDirection::ColumnReverse:
        resultTouchPoint = Point(map(touchPoint.x, _xMinimum, _xMaximum, 0, _displayWidth - 1),
                                 map(touchPoint.y, _yMinimum, _yMaximum, 0, _displayHeight - 1),
                                 touchPoint.z);
        break;
    default:
        resultTouchPoint = Point(touchPoint.x,
                                 touchPoint.y,
                                 touchPoint.z);
        break;
    }

    return resultTouchPoint;
}
void LiquidCrystalDisplayComponent::SetRotation(PageDirection direction)
{
    _liquidCrystalDisplay.setRotation(direction);
}
void LiquidCrystalDisplayComponent::FillScreen(uint16_t color)
{
    _liquidCrystalDisplay.fillScreen(color);
}
void LiquidCrystalDisplayComponent::FillRectangle(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color)
{
    _liquidCrystalDisplay.fillRect(x, y, width, height, color);
}
void LiquidCrystalDisplayComponent::DrawRectangle(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color)
{
    _liquidCrystalDisplay.drawRect(x, y, width, height, color);
}
void LiquidCrystalDisplayComponent::SetCursor(uint8_t column, uint8_t row)
{
    _liquidCrystalDisplay.setCursor(column, row);
}
void LiquidCrystalDisplayComponent::SetTextColor(uint16_t color)
{
    _liquidCrystalDisplay.setTextColor(color);
}
void LiquidCrystalDisplayComponent::SetTextSize(uint8_t size)
{
    _liquidCrystalDisplay.setTextSize(size);
}
void LiquidCrystalDisplayComponent::PrintText(String text)
{
    _liquidCrystalDisplay.print(text);
}