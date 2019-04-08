#include "ClockService.h"

String ClockService::GetTwoDigitsString(uint8_t number)
{
    return number <= 9 ? "0" + (String)number : (String)number;
}

ClockService::ClockService(IClockComponent *clockComponent) : _clockComponent(clockComponent) {}
String ClockService::GetDateTimeString(String pattern)
{
    StringFormatter formatter(pattern);
    formatter.SetValue("{month}", GetTwoDigitsString(_clockComponent->GetMonth()));
    formatter.SetValue("{day}", GetTwoDigitsString(_clockComponent->GetDay()));
    formatter.SetValue("{year}", (String)_clockComponent->GetYear());
    formatter.SetValue("{hours}", GetTwoDigitsString(_clockComponent->GetHour()));
    formatter.SetValue("{minutes}", GetTwoDigitsString(_clockComponent->GetMinute()));
    formatter.SetValue("{seconds}", GetTwoDigitsString(_clockComponent->GetSecond()));

    return formatter.GetFormattedMessage();
}