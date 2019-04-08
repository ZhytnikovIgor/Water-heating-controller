#pragma once
#include "..\..\Interfaces\ILoggerService.h"
#include "..\..\..\Services\Interfaces\IClockService.h"
#include "..\..\..\Services\Interfaces\ISecureDigitalCardService.h"
#include "..\..\..\Infrastructure\Classes\StringFormatter\StringFormatter.h"

class LoggerService : public ILoggerService
{
  private:
    String _fileName;
    IClockService *_clockService;
    ISecureDigitalCardService *_secureDigitalCardService;
    String CreateLogMessage(String logType, String message);

  public:
    LoggerService(String fileName, IClockService *clockService, ISecureDigitalCardService *secureDigitalCardService);
    void Info(String message);
    void Warning(String message);
    void Error(String message);
};