#pragma once
#include "..\..\..\Interfaces\IPage.h"
#include "..\..\..\Interfaces\IPageContext.h"
#include "..\..\..\Interfaces\IElement.h"
#include "..\..\..\Implementation\Elements\Button\Button.h"
#include "..\..\..\..\Infrastructure\Enumerations\PageDirection.h"

class HomePage : public IPage
{
  private:
    IPageContext *_pageContext;
    Button _testButton;

  public:
    HomePage(IPageContext *pageContext);
    void Render();
    void HandleTouch(Point rawTouchPoint);
};