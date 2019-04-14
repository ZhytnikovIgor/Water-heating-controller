#include "LiquidCrystalDisplayService.h"

LiquidCrystalDisplayService::LiquidCrystalDisplayService(ILiquidCrystalDisplayComponent *liquidCrystalDisplayComponent) : _liquidCrystalDisplayComponent(liquidCrystalDisplayComponent) {}
bool LiquidCrystalDisplayService::IsTouchScreenPressed()
{
    _liquidCrystalDisplayComponent->IsTouchScreenPressed();
}
Point LiquidCrystalDisplayService::GetTouchPoint(PageDirection direction)
{
    _liquidCrystalDisplayComponent->GetTouchPoint(direction);
}
void LiquidCrystalDisplayService::SetRotation(PageDirection direction)
{
    _liquidCrystalDisplayComponent->SetRotation(direction);
}
void LiquidCrystalDisplayService::FillScreen(uint16_t color)
{
    _liquidCrystalDisplayComponent->FillScreen(color);
}
void LiquidCrystalDisplayService::FillRectangle(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color)
{
    _liquidCrystalDisplayComponent->FillRectangle(x, y, width, height, color);
}
void LiquidCrystalDisplayService::DrawRectangle(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color)
{
    _liquidCrystalDisplayComponent->DrawRectangle(x, y, width, height, color);
}
void LiquidCrystalDisplayService::SetCursor(uint8_t column, uint8_t row)
{
    _liquidCrystalDisplayComponent->SetCursor(column, row);
}
void LiquidCrystalDisplayService::SetTextColor(uint16_t color)
{
    _liquidCrystalDisplayComponent->SetTextColor(color);
}
void LiquidCrystalDisplayService::SetTextSize(uint8_t size)
{
    _liquidCrystalDisplayComponent->SetTextSize(size);
}
void LiquidCrystalDisplayService::PrintText(String text)
{
    _liquidCrystalDisplayComponent->PrintText(text);
}