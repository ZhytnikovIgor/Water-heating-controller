#pragma once
#include "..\..\..\Interfaces\IStaticElement.h"
#include "..\..\..\Interfaces\IPageContext.h"
#include "..\..\..\..\Services\Interfaces\ILiquidCrystalDisplayService.h"

class BackgroundColor : public IStaticElement
{
private:
    IPageContext *_pageContext;
    uint16_t _color;
    bool _isRendered;

public:
    BackgroundColor(IPageContext *pageContext,
                    uint16_t color);
    void Render();
};