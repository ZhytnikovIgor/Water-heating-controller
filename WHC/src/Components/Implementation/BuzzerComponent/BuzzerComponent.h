#pragma once
#include <Arduino.h>
#include "..\..\Interfaces\IBuzzerComponent.h"

class BuzzerComponent : public IBuzzerComponent
{
  private:
    int _connectionPinNumber;

  public:
    BuzzerComponent(int connectionPinNumber);
    void PlayMelody();
};