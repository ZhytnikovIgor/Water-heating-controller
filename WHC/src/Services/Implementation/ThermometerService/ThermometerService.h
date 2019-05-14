#pragma once
#include "..\..\Interfaces\IThermometerService.h"
#include "..\..\..\Components\Interfaces\IThermometerComponent.h"

class ThermometerService : public IThermometerService
{
private:
    IThermometerComponent *_thermometerComponent;

public:
    ThermometerService(IThermometerComponent *thermometerComponent);
    float GetThermometerTemperature();
};