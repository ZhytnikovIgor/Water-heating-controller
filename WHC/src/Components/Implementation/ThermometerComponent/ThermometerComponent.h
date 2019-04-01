#pragma once
#include <OneWire.h>
#include <DallasTemperature.h>
#include "..\..\Interfaces\IThermometerComponent.h"

class ThermometerComponent : public IThermometerComponent
{
  private:
    DallasTemperature _sensor;
    uint8_t *_deviceAddress;

  public:
    ThermometerComponent(OneWire *oneWire, DeviceAddress deviceAddress);
    float GetTemperature();
};