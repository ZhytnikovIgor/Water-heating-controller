#include "BuzzerComponent.h"

BuzzerComponent::BuzzerComponent(int buzzerConnectionPinNumber) : _buzzerConnectionPinNumber(buzzerConnectionPinNumber)
{
    pinMode(_buzzerConnectionPinNumber, OUTPUT);
}
void BuzzerComponent::PlayMelody()
{
    tone(_buzzerConnectionPinNumber, 500);
    delay(500);
    noTone(_buzzerConnectionPinNumber);
    delay(500);
}