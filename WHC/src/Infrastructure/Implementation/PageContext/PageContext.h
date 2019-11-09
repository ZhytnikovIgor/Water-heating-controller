#pragma once
#include "..\..\Interfaces\IPageContext.h"

class PageContext : public IPageContext
{
private:
    ILiquidCrystalDisplayService *_liquidCrystalDisplayService;
    IThermometerService *_upperBoilerThermometerService;
    IThermometerService *_bottomBoilerThermometerService;
    IThermometerService *_roomThermometerService;
    IClockService *_clockService;
    IPageManager *_pageManager;

public:
    PageContext(ILiquidCrystalDisplayService *liquidCrystalDisplayService,
                IThermometerService *upperBoilerThermometerService,
                IThermometerService *bottomBoilerThermometerService,
                IThermometerService *roomThermometerService,
                IClockService *clockService,
                IPageManager *pageManager);
    ILiquidCrystalDisplayService *GetLiquidCrystalDisplayService();
    IThermometerService *GetUpperBoilerThermometerService();
    IThermometerService *GetBottomBoilerThermometerService();
    IThermometerService *GetRoomThermometerService();
    IClockService *GetClockService();
    IPageManager *GetPageManager();
};