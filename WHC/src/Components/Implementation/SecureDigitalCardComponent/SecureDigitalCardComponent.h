#pragma once
#include <SD.h>
#include <SPI.h>
#include "..\..\Interfaces\ISecureDigitalCardComponent.h"

class SecureDigitalCardComponent : public ISecureDigitalCardComponent
{
private:
    int _chipSelectPinNumber;
    File _file;

public:
    SecureDigitalCardComponent(int chipSelectPinNumber);
    bool IsAvailable();
    void WriteLineToFile(String fileName, String textLine);
};