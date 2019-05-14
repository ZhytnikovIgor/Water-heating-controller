#pragma once

class IThermometerService
{
public:
    virtual ~IThermometerService(){};
    virtual float GetThermometerTemperature() = 0;
};