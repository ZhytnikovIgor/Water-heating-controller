#pragma once
#include "..\..\Services\Interfaces\ILiquidCrystalDisplayService.h"
#include "..\..\Services\Interfaces\IThermometerService.h"
#include "..\..\Services\Interfaces\IClockService.h"
#include "..\..\Managers\Interfaces\IPageManager.h"

class IPageContext
{
public:
    virtual ~IPageContext(){};
    virtual ILiquidCrystalDisplayService *GetLiquidCrystalDisplayService() = 0;
    virtual IThermometerService *GetUpperBoilerThermometerService() = 0;
    virtual IThermometerService *GetBottomBoilerThermometerService() = 0;
    virtual IThermometerService *GetRoomThermometerService() = 0;
    virtual IClockService *GetClockService() = 0;
    virtual IPageManager *GetPageManager() = 0;
};