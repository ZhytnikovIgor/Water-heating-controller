#pragma once

class IElectricallyErasableMemoryComponent
{
public:
    virtual ~IElectricallyErasableMemoryComponent(){};
    virtual bool WriteByte(int address, uint8_t value) = 0;
    virtual bool WriteInt(int address, uint16_t value) = 0;
    virtual bool WriteLong(int address, uint32_t value) = 0;
    virtual bool WriteFloat(int address, float value) = 0;
    virtual bool WriteDouble(int address, double value) = 0;
    virtual bool UpdateByte(int address, uint8_t value) = 0;
    virtual bool UpdateInt(int address, uint16_t value) = 0;
    virtual bool UpdateLong(int address, uint32_t value) = 0;
    virtual bool UpdateFloat(int address, float value) = 0;
    virtual bool UpdateDouble(int address, double value) = 0;
    virtual uint8_t ReadByte(int address) = 0;
    virtual uint16_t ReadInt(int address) = 0;
    virtual uint32_t ReadLong(int address) = 0;
    virtual float ReadFloat(int address) = 0;
    virtual double ReadDouble(int address) = 0;
};