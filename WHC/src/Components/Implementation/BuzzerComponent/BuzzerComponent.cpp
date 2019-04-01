#include "BuzzerComponent.h"

BuzzerComponent::BuzzerComponent(int connectionPinNumber) : _connectionPinNumber(connectionPinNumber)
{
    pinMode(_connectionPinNumber, OUTPUT);
}
void BuzzerComponent::PlayMelody()
{
    tone(_connectionPinNumber, 500);
    delay(500);
    noTone(_connectionPinNumber);
    delay(500);
}