#pragma once
#include "..\..\Interfaces\IElectricallyErasableMemoryService.h"
#include "..\..\..\Components\Interfaces\IElectricallyErasableMemoryComponent.h"

class ElectricallyErasableMemoryService : public IElectricallyErasableMemoryService
{
private:
    IElectricallyErasableMemoryComponent *_electricallyErasableMemoryComponent;

public:
    ElectricallyErasableMemoryService(IElectricallyErasableMemoryComponent *electricallyErasableMemoryComponent);
    bool WriteByte(int address, uint8_t value);
    bool WriteInt(int address, uint16_t value);
    bool WriteLong(int address, uint32_t value);
    bool WriteFloat(int address, float value);
    bool WriteDouble(int address, double value);
    bool UpdateByte(int address, uint8_t value);
    bool UpdateInt(int address, uint16_t value);
    bool UpdateLong(int address, uint32_t value);
    bool UpdateFloat(int address, float value);
    bool UpdateDouble(int address, double value);
    uint8_t ReadByte(int address);
    uint16_t ReadInt(int address);
    uint32_t ReadLong(int address);
    float ReadFloat(int address);
    double ReadDouble(int address);
};