#pragma once
#include <stdint.h>
#include "..\..\Interfaces\IClockService.h"
#include "..\..\..\Components\Interfaces\IClockComponent.h"

class ClockService : public IClockService
{
  private:
    IClockComponent *_clockComponent;
    String GetTwoDigitsString(uint8_t number);

  public:
    ClockService(IClockComponent *clockComponent);
    String GetDateString();
    String GetTimeString(bool appendSeconds = true);
    String GetDateTimeString();
};