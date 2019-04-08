#include "StringFormatter.h"

StringFormatter::StringFormatter(String pattern) : _pattern(pattern) {}
void StringFormatter::SetValue(String key, String value)
{
    if (_pattern.indexOf(key) >= 0)
    {
        _pattern.replace(key, value);
    }
}
String StringFormatter::GetFormattedMessage()
{
    return _pattern;
}