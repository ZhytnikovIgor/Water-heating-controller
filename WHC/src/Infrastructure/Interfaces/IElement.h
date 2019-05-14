#pragma once
#include "..\Structures\Point\Point.h"

class IElement
{
public:
    virtual ~IElement(){};
    virtual bool IsRendered() = 0;
    virtual bool IsUpdated() = 0;
    virtual bool IsTouched(Point rawTouchPoint) = 0;
    virtual void Render() = 0;
};