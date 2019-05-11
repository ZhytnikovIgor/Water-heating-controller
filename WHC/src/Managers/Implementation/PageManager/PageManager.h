#pragma once
#include "..\..\Interfaces\IPageManager.h"
#include "..\..\..\Infrastructure\Interfaces\IPageContext.h"
#include "..\..\..\Infrastructure\Implementation\PageContext\PageContext.h"
#include "..\..\..\Infrastructure\Implementation\Pages\HomePage\HomePage.h"

class PageManager : public IPageManager
{
  private:
    IPage *_currentPage;
    IPageContext *_pageContext;

  public:
    PageManager(ILiquidCrystalDisplayService *liquidCrystalDisplayService);
    void SetCurrentPage(IPage *page);
    void RenderCurrentPage();
    void HandleCurrentPageTouch(Point rawTouchPoint);
};