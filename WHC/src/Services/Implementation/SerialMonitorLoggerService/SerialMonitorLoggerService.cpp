#include "SerialMonitorLoggerService.h"

SerialMonitorLoggerService::SerialMonitorLoggerService(bool isDebug, long baudRate) : _isDebug(isDebug)
{
    Serial.begin(baudRate);
}
void SerialMonitorLoggerService::Info(String message)
{
    Serial.println((String) "INFO: " + message);
}
void SerialMonitorLoggerService::Warning(String message)
{
    Serial.println((String) "WARNING: " + message);
}
void SerialMonitorLoggerService::Error(String message)
{
    Serial.println((String) "ERROR: " + message);
}
void SerialMonitorLoggerService::Debug(String message)
{
    if (_isDebug)
    {
        Serial.println((String) "DEBUG: " + message);
    }
}