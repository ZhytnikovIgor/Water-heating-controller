#include "PageContext.h"

PageContext::PageContext(ILiquidCrystalDisplayService *liquidCrystalDisplayService,
                         IThermometerService *upperBoilerThermometerService,
                         IThermometerService *bottomBoilerThermometerService,
                         IThermometerService *roomThermometerService,
                         IClockService *clockService,
                         IPageManager *pageManager) : _liquidCrystalDisplayService(liquidCrystalDisplayService),
                                                      _upperBoilerThermometerService(upperBoilerThermometerService),
                                                      _bottomBoilerThermometerService(bottomBoilerThermometerService),
                                                      _roomThermometerService(roomThermometerService),
                                                      _clockService(clockService),
                                                      _pageManager(pageManager) {}
ILiquidCrystalDisplayService *PageContext::GetLiquidCrystalDisplayService()
{
    return _liquidCrystalDisplayService;
}
IThermometerService *PageContext::GetUpperBoilerThermometerService()
{
    return _upperBoilerThermometerService;
}
IThermometerService *PageContext::GetBottomBoilerThermometerService()
{
    return _bottomBoilerThermometerService;
}
IThermometerService *PageContext::GetRoomThermometerService()
{
    return _roomThermometerService;
}
IClockService *PageContext::GetClockService()
{
    return _clockService;
}
IPageManager *PageContext::GetPageManager()
{
    return _pageManager;
}