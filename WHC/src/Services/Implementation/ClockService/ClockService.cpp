#include "ClockService.h"

String ClockService::GetTwoDigitsString(uint8_t number)
{
    return number <= 9 ? "0" + (String)number : (String)number;
}

ClockService::ClockService(IClockComponent *clockComponent) : _clockComponent(clockComponent) {}
String ClockService::GetDateTimeString(String pattern)
{
    StringFormatter formatter(pattern);

    if (_clockComponent->IsAvailable())
    {
        DateTime currentDateTime = _clockComponent->GetCurrentDateTime();

        formatter.SetValue("{month}", GetTwoDigitsString(currentDateTime.month()));
        formatter.SetValue("{day}", GetTwoDigitsString(currentDateTime.day()));
        formatter.SetValue("{year}", (String)currentDateTime.year());
        formatter.SetValue("{hours}", GetTwoDigitsString(currentDateTime.hour()));
        formatter.SetValue("{minutes}", GetTwoDigitsString(currentDateTime.minute()));
        formatter.SetValue("{seconds}", GetTwoDigitsString(currentDateTime.second()));
    }
    formatter.SetValue("{month}", "--");
    formatter.SetValue("{day}", "--");
    formatter.SetValue("{year}", "----");
    formatter.SetValue("{hours}", "--");
    formatter.SetValue("{minutes}", "--");
    formatter.SetValue("{seconds}", "--");

    return formatter.GetFormattedMessage();
}