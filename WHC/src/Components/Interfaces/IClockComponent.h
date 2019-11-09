#pragma once
#include <stdint.h>
#include <RTClib.h>

class IClockComponent
{
public:
    virtual ~IClockComponent(){};
    virtual void SetTime(uint16_t year, uint8_t month, uint8_t day, uint8_t hour = 0, uint8_t minute = 0, uint8_t second = 0) = 0;
    virtual DateTime GetCurrentDateTime() = 0;
    virtual bool IsAvailable() = 0;
};