#pragma once
#include "..\..\..\Interfaces\IElement.h"
#include "..\..\..\..\Infrastructure\Enumerations\PageDirection.h"

class BaseElement : public IElement
{
  private:
    bool _isRendered;

  public:
    BaseElement();
    bool IsRendered();
    virtual bool IsUpdated() = 0;
    virtual bool IsTouched(Point rawTouchPoint) = 0;
    virtual void Render();
};