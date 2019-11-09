#pragma once
#include "..\..\..\Interfaces\IStaticElement.h"
#include "..\..\..\Interfaces\IPageContext.h"
#include "..\..\..\..\Services\Interfaces\ILiquidCrystalDisplayService.h"

class StaticLabel : public IStaticElement
{
private:
    IPageContext *_pageContext;
    PageDirection _pageDirection;
    int16_t _x;
    int16_t _y;
    int16_t _size;
    uint16_t _color;
    uint16_t _backgroundColor;
    String _text;
    bool _isRendered;

public:
    StaticLabel(IPageContext *pageContext,
                PageDirection pageDirection,
                int16_t x,
                int16_t y,
                int16_t size,
                uint16_t color,
                uint16_t backgroundColor,
                String text);
    void Render();
};