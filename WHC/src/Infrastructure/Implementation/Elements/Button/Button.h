#pragma once
#include <stdint.h>
#include "..\BaseElement\BaseElement.h"
#include "..\..\..\Interfaces\IPageContext.h"
#include "..\..\..\..\Services\Interfaces\ILiquidCrystalDisplayService.h"

class Button : public BaseElement
{
private:
    IPageContext *_pageContext;
    PageDirection _pageDirection;
    int16_t _x;
    int16_t _y;
    int16_t _width;
    int16_t _height;
    uint16_t _color;
    uint16_t _borderColor;

public:
    Button(IPageContext *pageContext, PageDirection pageDirection, int16_t x, int16_t y, int16_t width, int16_t height, uint16_t _color, uint16_t _borderColor);
    bool IsUpdated();
    bool IsTouched(Point rawTouchPoint);
    void Render();
};