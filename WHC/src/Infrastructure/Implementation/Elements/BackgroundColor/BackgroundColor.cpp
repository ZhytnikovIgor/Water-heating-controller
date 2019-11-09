#include "BackgroundColor.h"

BackgroundColor::BackgroundColor(IPageContext *pageContext,
                                 uint16_t color) : _pageContext(pageContext),
                                                   _color(color),
                                                   _isRendered(false) {}
void BackgroundColor::Render()
{
    if (!_isRendered)
    {
        ILiquidCrystalDisplayService *liquidCrystalDisplayService = _pageContext->GetLiquidCrystalDisplayService();
        liquidCrystalDisplayService->FillScreen(_color);
        _isRendered = true;
    }
}