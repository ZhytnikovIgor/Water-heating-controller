#pragma once
#include <Wire.h>
#include <RTClib.h>
#include "..\..\Interfaces\IClockComponent.h"

class ClockComponent : public IClockComponent
{
private:
    RTC_DS3231 _realTimeClock;
    uint8_t _deviceAddress;

public:
    ClockComponent(uint8_t deviceAddress);
    void SetTime(uint16_t year, uint8_t month, uint8_t day, uint8_t hour = 0, uint8_t minute = 0, uint8_t second = 0);
    DateTime GetCurrentDateTime();
    bool IsAvailable();
};