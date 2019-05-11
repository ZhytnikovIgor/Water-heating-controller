#pragma once
#include "..\Structures\Point\Point.h"

class IPage
{
  public:
    virtual ~IPage(){};
    virtual void Render() = 0;
    virtual void HandleTouch(Point rawTouchPoint) = 0;
};