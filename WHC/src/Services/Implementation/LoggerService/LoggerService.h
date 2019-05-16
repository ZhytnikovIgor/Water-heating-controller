#pragma once
#include "..\..\Interfaces\ILoggerService.h"
#include "..\..\..\Services\Interfaces\IClockService.h"
#include "..\..\..\Services\Interfaces\ISecureDigitalCardService.h"
#include "..\..\..\Infrastructure\Classes\StringFormatter\StringFormatter.h"

class LoggerService : public ILoggerService
{
private:
    String _fileName;
    bool _isDebug;
    IClockService *_clockService;
    ISecureDigitalCardService *_secureDigitalCardService;
    String CreateLogMessage(String logType, String message);

public:
    LoggerService(String fileName, bool isDebug, IClockService *clockService, ISecureDigitalCardService *secureDigitalCardService);
    void Info(String message);
    void Warning(String message);
    void Error(String message);
    void Debug(String message);
};