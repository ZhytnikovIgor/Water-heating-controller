#pragma once

class IClockComponent
{
  public:
    virtual void SetTime(uint16_t year, uint8_t month, uint8_t day, uint8_t hour = 0, uint8_t minute = 0, uint8_t second = 0) = 0;
    virtual uint8_t GetHour() = 0;
    virtual uint8_t GetMinute() = 0;
    virtual uint8_t GetSecond() = 0;
    virtual uint8_t GetDay() = 0;
    virtual uint8_t GetMonth() = 0;
    virtual uint16_t GetYear() = 0;
};