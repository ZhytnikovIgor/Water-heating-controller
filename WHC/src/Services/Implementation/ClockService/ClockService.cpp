#include "ClockService.h"

String ClockService::GetTwoDigitsString(uint8_t number)
{
    return number <= 9 ? "0" + (String)number : (String)number;
}

ClockService::ClockService(IClockComponent *clockComponent) : _clockComponent(clockComponent) {}
String ClockService::GetDateString()
{
    String dateSeparator = "/";
    String dateString = GetTwoDigitsString(_clockComponent->GetDay()) +
                        dateSeparator +
                        GetTwoDigitsString(_clockComponent->GetMonth()) +
                        dateSeparator +
                        (String)_clockComponent->GetYear();
    return dateString;
}
String ClockService::GetTimeString(bool appendSeconds)
{
    String timeSeparator = ":";
    String timeString = GetTwoDigitsString(_clockComponent->GetHour()) +
                        timeSeparator +
                        GetTwoDigitsString(_clockComponent->GetMinute());
    if (appendSeconds)
    {
        timeString += timeSeparator +
                      GetTwoDigitsString(_clockComponent->GetSecond());
    }
    return timeString;
}
String ClockService::GetDateTimeString()
{
    return GetDateString() +
           " " +
           GetTimeString();
}