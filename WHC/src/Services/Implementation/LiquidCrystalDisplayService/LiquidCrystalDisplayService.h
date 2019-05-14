#pragma once
#include "..\..\Interfaces\ILiquidCrystalDisplayService.h"
#include "..\..\..\Components\Interfaces\ILiquidCrystalDisplayComponent.h"

class LiquidCrystalDisplayService : public ILiquidCrystalDisplayService
{
private:
    ILiquidCrystalDisplayComponent *_liquidCrystalDisplayComponent;

public:
    LiquidCrystalDisplayService(ILiquidCrystalDisplayComponent *liquidCrystalDisplayComponent);
    bool IsTouchScreenPressed();
    Point GetRawTouchPoint();
    Point GetMappedTouchPoint(Point rawTouchPoint, PageDirection direction);
    void SetRotation(PageDirection direction);
    void FillScreen(uint16_t color);
    void FillRectangle(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color);
    void DrawRectangle(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color);
    void SetCursor(uint8_t column, uint8_t row);
    void SetTextColor(uint16_t color);
    void SetTextSize(uint8_t size);
    void PrintText(String text);
};