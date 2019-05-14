#pragma once

class IThermometerComponent
{
public:
    virtual ~IThermometerComponent(){};
    virtual float GetTemperature() = 0;
};