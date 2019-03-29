#pragma once
#include <Arduino.h>
#include "..\..\Interfaces\IBuzzerComponent.h"

class BuzzerComponent : public IBuzzerComponent
{
  private:
    int _buzzerConnectionPinNumber;

  public:
    BuzzerComponent(int buzzerConnectionPinNumber);
    void PlayMelody();
};