#include "LoggerService.h"

String LoggerService::CreateLogMessage(String logType, String message)
{
    StringFormatter formatter("{logTime},{logType},\"{message}\"");
    formatter.SetValue("{logTime}", _clockService->GetDateTimeString());
    formatter.SetValue("{logType}", logType);
    formatter.SetValue("{message}", message);

    return formatter.GetFormattedMessage();
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