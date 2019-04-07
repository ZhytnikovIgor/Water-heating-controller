#include "SecureDigitalCardService.h"

SecureDigitalCardService::SecureDigitalCardService(ISecureDigitalCardComponent *secureDigitalCardComponent) : _secureDigitalCardComponent(secureDigitalCardComponent) {}
bool SecureDigitalCardService::IsSecureDigitalCardAvailable()
{
    return _secureDigitalCardComponent->IsAvailable();
}
void SecureDigitalCardService::WriteLineToFile(String fileName, String textLine)
{
    _secureDigitalCardComponent->WriteLineToFile(fileName, textLine);
}