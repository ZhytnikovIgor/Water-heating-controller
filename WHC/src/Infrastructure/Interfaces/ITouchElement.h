#pragma once
#include "..\Structures\Point\Point.h"

class ITouchElement
{
public:
    virtual ~ITouchElement(){};
    virtual bool IsTouched(Point rawTouchPoint) = 0;
};