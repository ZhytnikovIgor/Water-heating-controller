#pragma once

class ISecureDigitalCardComponent
{
  public:
    virtual ~ISecureDigitalCardComponent(){};
    virtual bool IsAvailable() = 0;
    virtual void WriteLineToFile(String fileName, String textLine) = 0;
};