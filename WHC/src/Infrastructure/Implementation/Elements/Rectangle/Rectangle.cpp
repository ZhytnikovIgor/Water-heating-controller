#include "Rectangle.h"

Rectangle::Rectangle(IPageContext *pageContext,
                     PageDirection pageDirection,
                     int16_t x,
                     int16_t y,
                     int16_t width,
                     int16_t height,
                     uint16_t borderColor) : _pageContext(pageContext),
                                             _pageDirection(pageDirection),
                                             _x(x),
                                             _y(y),
                                             _width(width),
                                             _height(height),
                                             _borderColor(borderColor),
                                             _isRendered(false) {}
void Rectangle::Render()
{
    if (!_isRendered)
    {
        ILiquidCrystalDisplayService *liquidCrystalDisplayService = _pageContext->GetLiquidCrystalDisplayService();
        liquidCrystalDisplayService->SetRotation(_pageDirection);
        liquidCrystalDisplayService->DrawRectangle(_x, _y, _width, _height, _borderColor);
        _isRendered = true;
    }
}