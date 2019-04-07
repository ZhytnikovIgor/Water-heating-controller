#include "LoggerService.h"

String LoggerService::CreateLogMessage(String logType, String message)
{
    String logMessage = "{logTime},{logType},\"{message}\"";
    logMessage.replace("{logTime}", _clockService->GetDateTimeString());
    logMessage.replace("{logType}", logType);
    logMessage.replace("{message}", message);
    return logMessage;
}

LoggerService::LoggerService(String fileName, IClockService *clockService, ISecureDigitalCardService *secureDigitalCardService) : _fileName(fileName),
                                                                                                                                  _clockService(clockService),
                                                                                                                                  _secureDigitalCardService(secureDigitalCardService) {}
void LoggerService::Info(String message)
{
    _secureDigitalCardService->WriteLineToFile(_fileName, CreateLogMessage("INFO", message));
}
void LoggerService::Warning(String message)
{
    _secureDigitalCardService->WriteLineToFile(_fileName, CreateLogMessage("WARNING", message));
}
void LoggerService::Error(String message)
{
    _secureDigitalCardService->WriteLineToFile(_fileName, CreateLogMessage("ERROR", message));
}