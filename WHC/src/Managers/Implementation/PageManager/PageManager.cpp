#include "PageManager.h"

PageManager::PageManager(ILiquidCrystalDisplayService *liquidCrystalDisplayService,
                         IThermometerService *upperBoilerThermometerService,
                         IThermometerService *bottomBoilerThermometerService,
                         IThermometerService *roomThermometerService,
                         IClockService *clockService) : _currentPage(new HomePage(_pageContext)),
                                                        _pageContext(new PageContext(liquidCrystalDisplayService,
                                                                                     upperBoilerThermometerService,
                                                                                     bottomBoilerThermometerService,
                                                                                     roomThermometerService,
                                                                                     clockService,
                                                                                     this)) {}
void PageManager::SetCurrentPage(IPage *page)
{
    _currentPage = page;
}
void PageManager::RenderCurrentPage()
{
    _currentPage->Render();
}
void PageManager::HandleCurrentPageTouch(Point rawTouchPoint)
{
    _currentPage->HandleTouch(rawTouchPoint);
}