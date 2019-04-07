#pragma once
#include <WString.h>

class ISecureDigitalCardService
{
  public:
    virtual ~ISecureDigitalCardService(){};
    virtual bool IsSecureDigitalCardAvailable() = 0;
    virtual void WriteLineToFile(String fileName, String textLine) = 0;
};