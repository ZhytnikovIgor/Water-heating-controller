#include "BaseElement.h"

BaseElement::BaseElement() : _isRendered(false) {}
bool BaseElement::IsRendered()
{
    return _isRendered;
}
void BaseElement::Render()
{
    _isRendered = true;
}