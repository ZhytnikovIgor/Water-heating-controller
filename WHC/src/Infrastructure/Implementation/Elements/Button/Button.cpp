#include "Button.h"
#include "..\..\..\Structures\Point\Point.h"

Button::Button(IPageContext *pageContext, PageDirection pageDirection, int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color, uint16_t borderColor) : _pageContext(pageContext),
                                                                                                                                                                    _pageDirection(pageDirection),
                                                                                                                                                                    _x(x),
                                                                                                                                                                    _y(y),
                                                                                                                                                                    _width(width),
                                                                                                                                                                    _height(height),
                                                                                                                                                                    _color(color),
                                                                                                                                                                    _borderColor(borderColor) {}
bool Button::IsUpdated()
{
    return false;
}
bool Button::IsTouched(Point rawTouchPoint)
{
    ILiquidCrystalDisplayService *liquidCrystalDisplayService = _pageContext->GetLiquidCrystalDisplayService();
    Point touchPoint = liquidCrystalDisplayService->GetMappedTouchPoint(rawTouchPoint, _pageDirection);
    return touchPoint.X >= _x && touchPoint.X <= _width && touchPoint.Y >= _y && touchPoint.Y <= _height;
}
void Button::Render()
{
    if (!BaseElement::IsRendered() || IsUpdated())
    {
        BaseElement::Render();
        ILiquidCrystalDisplayService *liquidCrystalDisplayService = _pageContext->GetLiquidCrystalDisplayService();
        liquidCrystalDisplayService->SetRotation(_pageDirection);
        liquidCrystalDisplayService->FillRectangle(_x, _y, _width, _height, _color);
        liquidCrystalDisplayService->DrawRectangle(_x, _y, _width, _height, _borderColor);
    }
}