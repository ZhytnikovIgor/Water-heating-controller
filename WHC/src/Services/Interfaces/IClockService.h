#pragma once
#include <WString.h>

class IClockService
{
  public:
    virtual ~IClockService(){};
    virtual String GetDateString() = 0;
    virtual String GetTimeString(bool appendSeconds = true) = 0;
    virtual String GetDateTimeString() = 0;
};