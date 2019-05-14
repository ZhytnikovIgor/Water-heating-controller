#pragma once
#include "..\..\Interfaces\ISecureDigitalCardService.h"
#include "..\..\..\Components\Interfaces\ISecureDigitalCardComponent.h"

class SecureDigitalCardService : public ISecureDigitalCardService
{
private:
    ISecureDigitalCardComponent *_secureDigitalCardComponent;

public:
    SecureDigitalCardService(ISecureDigitalCardComponent *secureDigitalCardComponent);
    bool IsSecureDigitalCardAvailable();
    void WriteLineToFile(String fileName, String textLine);
};