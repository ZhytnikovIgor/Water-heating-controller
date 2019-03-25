#ifndef IBuzzerComponent_h
#define IBuzzerComponent_h

class IBuzzerComponent
{
  public:
    virtual void PlayMelody() = 0;
    virtual void StopMelody() = 0;
};

#endif