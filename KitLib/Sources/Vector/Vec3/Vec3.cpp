#include "../../pch/pch.h"
#include "Vec3.h"

using namespace kit;

vec3::vec3() { }
vec3::vec3(const float& _x, const float& _y, const float& _z) : float3(_x, _y, _z) { }
vec3::~vec3() { }

vec3& vec3::operator= (const float3& _float3) {
    this->x = _float3.x;
    this->y = _float3.y;
    this->z = _float3.z;
    return *this;
}

void vec3::Normalize() {
    const float leng = Length();
    if (leng > 0.0f) *this / leng;
}

bool vec3::IsVertical(const vec3& _vec) const {
    float d = Dot(_vec);
    return (-_OX_EPSILON_ < d && d < _OX_EPSILON_);
}

bool vec3::IsParallel(const vec3& _vec) const {
    float c = Cross(_vec).LengthSq();
    return (-_OX_EPSILON_ < c && c < _OX_EPSILON_);
}

bool vec3::IsSharpAngle(const vec3& _vec) const {
    return (Dot(_vec) >= 0.0f);
}