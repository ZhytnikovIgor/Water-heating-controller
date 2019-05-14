#include "ElectricallyErasableMemoryService.h"

ElectricallyErasableMemoryService::ElectricallyErasableMemoryService(IElectricallyErasableMemoryComponent *electricallyErasableMemoryComponent) : _electricallyErasableMemoryComponent(electricallyErasableMemoryComponent) {}
bool ElectricallyErasableMemoryService::WriteByte(int address, uint8_t value)
{
    return _electricallyErasableMemoryComponent->WriteByte(address, value);
}
bool ElectricallyErasableMemoryService::WriteInt(int address, uint16_t value)
{
    return _electricallyErasableMemoryComponent->WriteInt(address, value);
}
bool ElectricallyErasableMemoryService::WriteLong(int address, uint32_t value)
{
    return _electricallyErasableMemoryComponent->WriteLong(address, value);
}
bool ElectricallyErasableMemoryService::WriteFloat(int address, float value)
{
    return _electricallyErasableMemoryComponent->WriteFloat(address, value);
}
bool ElectricallyErasableMemoryService::WriteDouble(int address, double value)
{
    return _electricallyErasableMemoryComponent->WriteDouble(address, value);
}
bool ElectricallyErasableMemoryService::UpdateByte(int address, uint8_t value)
{
    return _electricallyErasableMemoryComponent->UpdateByte(address, value);
}
bool ElectricallyErasableMemoryService::UpdateInt(int address, uint16_t value)
{
    return _electricallyErasableMemoryComponent->UpdateInt(address, value);
}
bool ElectricallyErasableMemoryService::UpdateLong(int address, uint32_t value)
{
    return _electricallyErasableMemoryComponent->UpdateLong(address, value);
}
bool ElectricallyErasableMemoryService::UpdateFloat(int address, float value)
{
    return _electricallyErasableMemoryComponent->UpdateFloat(address, value);
}
bool ElectricallyErasableMemoryService::UpdateDouble(int address, double value)
{
    return _electricallyErasableMemoryComponent->UpdateDouble(address, value);
}
uint8_t ElectricallyErasableMemoryService::ReadByte(int address)
{
    return _electricallyErasableMemoryComponent->ReadByte(address);
}
uint16_t ElectricallyErasableMemoryService::ReadInt(int address)
{
    return _electricallyErasableMemoryComponent->ReadInt(address);
}
uint32_t ElectricallyErasableMemoryService::ReadLong(int address)
{
    return _electricallyErasableMemoryComponent->ReadLong(address);
}
float ElectricallyErasableMemoryService::ReadFloat(int address)
{
    return _electricallyErasableMemoryComponent->ReadFloat(address);
}
double ElectricallyErasableMemoryService::ReadDouble(int address)
{
    return _electricallyErasableMemoryComponent->ReadDouble(address);
}