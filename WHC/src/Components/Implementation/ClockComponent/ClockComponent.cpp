#include <Wire.h>
#include "ClockComponent.h"

ClockComponent::ClockComponent()
{
    Wire.begin();
}
void ClockComponent::SetTime(uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, uint8_t second)
{
    _realTimeClock.adjust(DateTime(DateTime(year, month, day, hour, minute, second).unixtime()));
}
uint8_t ClockComponent::GetHour() { return _realTimeClock.now().hour(); }
uint8_t ClockComponent::GetMinute() { return _realTimeClock.now().minute(); }
uint8_t ClockComponent::GetSecond() { return _realTimeClock.now().second(); }
uint8_t ClockComponent::GetDay() { return _realTimeClock.now().day(); }
uint8_t ClockComponent::GetMonth() { return _realTimeClock.now().month(); }
uint16_t ClockComponent::GetYear() { return _realTimeClock.now().year(); }
