#include "ElectricallyErasableMemoryComponent.h"

ElectricallyErasableMemoryComponent::ElectricallyErasableMemoryComponent(int memoryStartAddress, int memoryEndAddress, int maximumAllowedWrites)
{
    EEPROM.setMemPool(memoryStartAddress, memoryEndAddress);
    EEPROM.setMaxAllowedWrites(maximumAllowedWrites);
}
bool ElectricallyErasableMemoryComponent::WriteByte(int address, uint8_t value)
{
    return EEPROM.writeByte(address, value);
}
bool ElectricallyErasableMemoryComponent::WriteInt(int address, uint16_t value)
{
    return EEPROM.writeInt(address, value);
}
bool ElectricallyErasableMemoryComponent::WriteLong(int address, uint32_t value)
{
    return EEPROM.writeLong(address, value);
}
bool ElectricallyErasableMemoryComponent::WriteFloat(int address, float value)
{
    return EEPROM.writeFloat(address, value);
}
bool ElectricallyErasableMemoryComponent::WriteDouble(int address, double value)
{
    return EEPROM.writeDouble(address, value);
}
bool ElectricallyErasableMemoryComponent::UpdateByte(int address, uint8_t value)
{
    return EEPROM.updateByte(address, value);
}
bool ElectricallyErasableMemoryComponent::UpdateInt(int address, uint16_t value)
{
    return EEPROM.updateInt(address, value);
}
bool ElectricallyErasableMemoryComponent::UpdateLong(int address, uint32_t value)
{
    return EEPROM.updateLong(address, value);
}
bool ElectricallyErasableMemoryComponent::UpdateFloat(int address, float value)
{
    return EEPROM.updateFloat(address, value);
}
bool ElectricallyErasableMemoryComponent::UpdateDouble(int address, double value)
{
    return EEPROM.updateDouble(address, value);
}
uint8_t ElectricallyErasableMemoryComponent::ReadByte(int address)
{
    return EEPROM.readByte(address);
}
uint16_t ElectricallyErasableMemoryComponent::ReadInt(int address)
{
    return EEPROM.readInt(address);
}
uint32_t ElectricallyErasableMemoryComponent::ReadLong(int address)
{
    return EEPROM.readLong(address);
}
float ElectricallyErasableMemoryComponent::ReadFloat(int address)
{
    return EEPROM.readFloat(address);
}
double ElectricallyErasableMemoryComponent::ReadDouble(int address)
{
    return EEPROM.readDouble(address);
}