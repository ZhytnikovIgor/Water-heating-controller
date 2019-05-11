#include "PageManager.h"

PageManager::PageManager(ILiquidCrystalDisplayService *liquidCrystalDisplayService) : _currentPage(new HomePage(_pageContext)),
                                                                                      _pageContext(new PageContext(liquidCrystalDisplayService, this)) {}
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