#pragma once

template <class T>
class IStateElement
{
public:
    virtual ~IStateElement(){};
    virtual void Render(T state) = 0;
};