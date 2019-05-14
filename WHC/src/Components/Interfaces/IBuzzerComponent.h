#pragma once

class IBuzzerComponent
{
public:
    virtual ~IBuzzerComponent(){};
    virtual void PlayMelody() = 0;
};