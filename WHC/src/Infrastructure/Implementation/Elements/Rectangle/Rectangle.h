#pragma once
#include "..\..\..\Interfaces\IStaticElement.h"
#include "..\..\..\Interfaces\IPageContext.h"
#include "..\..\..\..\Services\Interfaces\ILiquidCrystalDisplayService.h"

class Rectangle : public IStaticElement
{
private:
    IPageContext *_pageContext;
    PageDirection _pageDirection;
    int16_t _x;
    int16_t _y;
    int16_t _width;
    int16_t _height;
    uint16_t _borderColor;
    bool _isRendered;

public:
    Rectangle(IPageContext *pageContext,
              PageDirection pageDirection,
              int16_t x,
              int16_t y,
              int16_t width,
              int16_t height,
              uint16_t borderColor);
    void Render();
};