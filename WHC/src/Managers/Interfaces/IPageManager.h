#pragma once
#include "..\..\Infrastructure\Interfaces\IPage.h"
#include "..\..\Infrastructure\Structures\Point\Point.h"

class IPageManager
{
  public:
    virtual ~IPageManager(){};
    virtual void SetCurrentPage(IPage *page) = 0;
    virtual void RenderCurrentPage() = 0;
    virtual void HandleCurrentPageTouch(Point rawTouchPoint) = 0;
};