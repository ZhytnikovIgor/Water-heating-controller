#include "PageContext.h"

PageContext::PageContext(ILiquidCrystalDisplayService *liquidCrystalDisplayService, IPageManager *pageManager) : _liquidCrystalDisplayService(liquidCrystalDisplayService),
                                                                                                                 _pageManager(pageManager) {}
ILiquidCrystalDisplayService *PageContext::GetLiquidCrystalDisplayService()
{
    return _liquidCrystalDisplayService;
}
IPageManager *PageContext::GetPageManager()
{
    return _pageManager;
}