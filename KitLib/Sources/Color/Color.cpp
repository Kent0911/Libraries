#include "Color.h"

using namespace kit;

template <class T>
color<T> color<T>::operator= (const color& _color) {
    this->red = _color.red;
    this->green = _color.green;
    this->blue = _color.blue;
    this->alpha = _color.alpha;
    return *this;
}