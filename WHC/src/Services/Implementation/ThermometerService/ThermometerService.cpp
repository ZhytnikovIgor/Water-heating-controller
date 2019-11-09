#include "ThermometerService.h"

ThermometerService::ThermometerService(IThermometerComponent *thermometerComponent) : _thermometerComponent(thermometerComponent) {}
String ThermometerService::GetTemperatureString()
{
    String emptyTemperatureString = "--.--";

    if (_thermometerComponent->IsAvailable())
    {
        float temperature = _thermometerComponent->GetTemperature();
        if (temperature >= 0 && temperature < 100)
        {
            if (temperature < 10)
            {
                return "0" + (String)temperature;
            }

            return (String)temperature;
        }
    }

    return emptyTemperatureString;
}