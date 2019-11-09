#include "StaticLabel.h"

StaticLabel::StaticLabel(IPageContext *pageContext,
                         PageDirection pageDirection,
                         int16_t x,
                         int16_t y,
                         int16_t size,
                         uint16_t color,
                         uint16_t backgroundColor,
                         String text) : _pageContext(pageContext),
                                        _pageDirection(pageDirection),
                                        _x(x),
                                        _y(y),
                                        _size(size),
                                        _color(color),
                                        _backgroundColor(backgroundColor),
                                        _text(text),
                                        _isRendered(false) {}
void StaticLabel::Render()
{
    if (!_isRendered)
    {
        ILiquidCrystalDisplayService *liquidCrystalDisplayService = _pageContext->GetLiquidCrystalDisplayService();
        liquidCrystalDisplayService->SetRotation(_pageDirection);
        liquidCrystalDisplayService->SetCursor(_x, _y);
        liquidCrystalDisplayService->SetTextColor(_color, _backgroundColor);
        liquidCrystalDisplayService->SetTextSize(_size);
        liquidCrystalDisplayService->PrintText(_text);
        _isRendered = true;
    }
}