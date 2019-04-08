#include "ThermometerService.h"

ThermometerService::ThermometerService(IThermometerComponent *thermometerComponent) : _thermometerComponent(thermometerComponent) {}
float ThermometerService::GetThermometerTemperature()
{
    return _thermometerComponent->GetTemperature();
}