#include "ThermometerComponent.h"

ThermometerComponent::ThermometerComponent(OneWire *oneWire, DeviceAddress deviceAddress) : _sensor(oneWire), _deviceAddress(deviceAddress) {}
float ThermometerComponent::GetTemperature()
{
    _sensor.requestTemperaturesByAddress(_deviceAddress);
    return _sensor.getTempC(_deviceAddress);
}