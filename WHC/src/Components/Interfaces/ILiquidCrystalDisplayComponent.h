#pragma once
#include <stdint.h>
#include <WString.h>
#include "..\..\Infrastructure\Structures\Point\Point.h"
#include "..\..\Infrastructure\Enumerations\PageDirection.h"

class ILiquidCrystalDisplayComponent
{
public:
    virtual ~ILiquidCrystalDisplayComponent(){};
    virtual bool IsTouchScreenPressed() = 0;
    virtual Point GetRawTouchPoint() = 0;
    virtual Point GetMappedTouchPoint(Point rawTouchPoint, PageDirection direction) = 0;
    virtual void SetRotation(PageDirection direction) = 0;
    virtual void FillScreen(uint16_t color) = 0;
    virtual void FillRectangle(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color) = 0;
    virtual void DrawRectangle(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color) = 0;
    virtual void SetCursor(uint8_t column, uint8_t row) = 0;
    virtual void SetTextColor(uint16_t color, uint16_t backgroundColor) = 0;
    virtual void SetTextSize(uint8_t size) = 0;
    virtual void PrintText(String text) = 0;
};