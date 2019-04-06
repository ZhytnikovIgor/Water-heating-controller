#include "SecureDigitalCardComponent.h"

SecureDigitalCardComponent::SecureDigitalCardComponent(int chipSelectPinNumber) : _chipSelectPinNumber(chipSelectPinNumber)
{
    pinMode(_chipSelectPinNumber, OUTPUT);
}
bool SecureDigitalCardComponent::IsAvailable()
{
    return SD.begin();
}
void SecureDigitalCardComponent::WriteLineToFile(String fileName, String textLine)
{
    if (IsAvailable())
    {
        _file = SD.open(fileName, FILE_WRITE);
        if (_file)
        {
            _file.println(textLine);
            _file.close();
        }
    }
}