#pragma once
#include <WString.h>

class StringFormatter
{
  private:
    String _pattern;

  public:
    StringFormatter(String pattern);
    void SetValue(String key, String value);
    String GetFormattedMessage();
};