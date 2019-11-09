#pragma once

class IStaticElement
{
public:
    virtual ~IStaticElement(){};
    virtual void Render() = 0;
};