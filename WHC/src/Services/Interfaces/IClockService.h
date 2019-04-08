#pragma once
#include <WString.h>

class IClockService
{
  public:
    virtual ~IClockService(){};
    virtual String GetDateTimeString(String pattern = "{month}/{day}/{year} {hours}:{minutes}:{seconds}") = 0;
};