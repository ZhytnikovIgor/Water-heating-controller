#pragma once
#include "..\..\Services\Interfaces\ILiquidCrystalDisplayService.h"
#include "..\..\Managers\Interfaces\IPageManager.h"

class IPageContext
{
  public:
    virtual ~IPageContext(){};
    virtual ILiquidCrystalDisplayService *GetLiquidCrystalDisplayService() = 0;
    virtual IPageManager *GetPageManager() = 0;
};