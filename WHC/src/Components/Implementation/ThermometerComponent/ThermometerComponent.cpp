#include "ThermometerComponent.h"

ThermometerComponent::ThermometerComponent(OneWire *oneWire,
                                           DeviceAddress deviceAddress,
                                           ThermometerAccuracy accuracy) : _sensor(oneWire),
                                                                           _deviceAddress(deviceAddress)
{
    _sensor.setResolution(_deviceAddress, accuracy);
}
float ThermometerComponent::GetTemperature()
{
    _sensor.requestTemperaturesByAddress(_deviceAddress);
    return _sensor.getTempC(_deviceAddress);
}