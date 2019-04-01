#ifndef ClockComponent_h
#define ClockComponent_h
#include <RTClib.h>
#include "..\..\Interfaces\IClockComponent.h"

class ClockComponent : public IClockComponent
{
  private:
    RTC_DS3231 _realTimeClock;

  public:
    ClockComponent();
    void SetTime(uint16_t year, uint8_t month, uint8_t day, uint8_t hour = 0, uint8_t minute = 0, uint8_t second = 0);
    uint8_t GetHour();
    uint8_t GetMinute();
    uint8_t GetSecond();
    uint8_t GetDay();
    uint8_t GetMonth();
    uint16_t GetYear();
};

#endif
