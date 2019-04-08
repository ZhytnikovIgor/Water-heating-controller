#pragma once
#include <stdint.h>
#include "..\..\Interfaces\IClockService.h"
#include "..\..\..\Components\Interfaces\IClockComponent.h"
#include "..\..\..\Infrastructure\Classes\StringFormatter\StringFormatter.h"

class ClockService : public IClockService
{
  private:
    IClockComponent *_clockComponent;
    String GetTwoDigitsString(uint8_t number);

  public:
    ClockService(IClockComponent *clockComponent);
    String GetDateTimeString(String pattern);
};