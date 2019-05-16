#pragma once
#include "Arduino.h"
#include "..\..\Interfaces\ILoggerService.h"

class SerialMonitorLoggerService : public ILoggerService
{
private:
    bool _isDebug;

public:
    SerialMonitorLoggerService(bool isDebug, long baudRate);
    void Info(String message);
    void Warning(String message);
    void Error(String message);
    void Debug(String message);
};