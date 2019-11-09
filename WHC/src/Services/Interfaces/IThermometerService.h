#pragma once
#include <WString.h>

class IThermometerService
{
public:
    virtual ~IThermometerService(){};
    virtual String GetTemperatureString() = 0;
};