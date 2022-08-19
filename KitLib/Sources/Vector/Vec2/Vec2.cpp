#include "../../pch/pch.h"
#include "Vec2.h"

using namespace kit;

vec2::vec2() { }
vec2::vec2(const float& _x, const float& _y) : float2(_x, _y) { }
vec2::~vec2() { }

vec2& vec2::operator= (const float2& _float2) {
    this->x = _float2.x;
    this->y = _float2.y;
    return *this;
}

void vec2::Normalize() {
    const float leng = Length();
    if (leng > 0.0f) *this /= leng;
}

bool vec2::IsVertical(const vec2& _vec) const {
    float d = Dot(_vec);
    return(-_OX_EPSILON_ < d&& d < _OX_EPSILON_);
}

bool vec2::IsParallel(const vec2& _vec) const {
    float c = Cross(_vec);
    return(-_OX_EPSILON_ < c&& c < _OX_EPSILON_);
}

bool vec2::IsSharpAngle(const vec2& _vec) const {
    return (Dot(_vec) >= 0.0f);
}