#include "BuzzerComponent.h"

BuzzerComponent::BuzzerComponent(int buzzerConnectionPinNumber) : _buzzerConnectionPinNumber(buzzerConnectionPinNumber)
{
    pinMode(_buzzerConnectionPinNumber, OUTPUT);
}
void BuzzerComponent::PlayMelody()
{
    tone(_buzzerConnectionPinNumber, 1000);
}
void BuzzerComponent::StopMelody()
{
    noTone(_buzzerConnectionPinNumber);
}