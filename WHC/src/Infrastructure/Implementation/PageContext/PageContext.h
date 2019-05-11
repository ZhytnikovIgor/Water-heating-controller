#pragma once
#include "..\..\Interfaces\IPageContext.h"

class PageContext : public IPageContext
{
private:
    ILiquidCrystalDisplayService *_liquidCrystalDisplayService;
    IPageManager *_pageManager;

public:
    PageContext(ILiquidCrystalDisplayService *liquidCrystalDisplayService, IPageManager *pageManager);
    ILiquidCrystalDisplayService *GetLiquidCrystalDisplayService();
    IPageManager *GetPageManager();
};