#pragma once
#include <WString.h>

class ILoggerService
{
public:
    virtual ~ILoggerService(){};
    virtual void Info(String message) = 0;
    virtual void Warning(String message) = 0;
    virtual void Error(String message) = 0;
};