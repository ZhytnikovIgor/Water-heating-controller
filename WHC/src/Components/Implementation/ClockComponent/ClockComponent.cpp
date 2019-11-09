#include "ClockComponent.h"

ClockComponent::ClockComponent(uint8_t deviceAddress) : _deviceAddress(deviceAddress)
{
    _realTimeClock.begin();
}
void ClockComponent::SetTime(uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, uint8_t second)
{
    _realTimeClock.adjust(DateTime(DateTime(year, month, day, hour, minute, second).unixtime()));
}
DateTime ClockComponent::GetCurrentDateTime()
{
    return _realTimeClock.now();
}
bool ClockComponent::IsAvailable()
{
    Wire.beginTransmission(_deviceAddress);
    return Wire.endTransmission() == 0;
}