#pragma once
#include "..\..\..\Interfaces\IStateElement.h"
#include "..\..\..\Interfaces\IPageContext.h"
#include "..\..\..\..\Services\Interfaces\ILiquidCrystalDisplayService.h"

class StateLabel : public IStateElement<String>
{
private:
    IPageContext *_pageContext;
    PageDirection _pageDirection;
    int16_t _x;
    int16_t _y;
    int16_t _size;
    uint16_t _color;
    uint16_t _backgroundColor;
    bool _isRendered;
    String _currentState;

public:
    StateLabel(IPageContext *pageContext,
               PageDirection pageDirection,
               int16_t x,
               int16_t y,
               int16_t size,
               uint16_t color,
               uint16_t backgroundColor);
    void Render(String state);
};