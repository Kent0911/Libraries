#include "../pch/pch.h"
#include "Template.h"

using namespace kit;

float2::float2() : x(0.0f), y(0.0f) { }

float2::float2(const float& _x, const float& _y) : x(_x), y(_y) { }

float2::~float2() { }

float2 float2::operator= (const float2& _float2) {
    this->x = _float2.x;
    this->y = _float2.y;
    return *this;
}

float2 float2::operator+ (const float2& _float2) const {
    return float2(x + _float2.x, y + _float2.y);
}

float2 float2::operator+= (const float2& _float2) {
    this->x += _float2.x;
    this->y += _float2.y;
    return *this;
}

float2 float2::operator- () const {
    return float2(x * -1.0f, y * -1.0f);
}

float2 float2::operator- (const float2& _float2) const {
    return float2(x - _float2.x, y - _float2.y);
}

float2 float2::operator-= (const float2& _float2) {
    this->x -= _float2.x;
    this->y -= _float2.y;
    return *this;
}

float2 float2::operator* (const float& _value) const {
    return float2(x * _value, y * _value);
}

float2 float2::operator*= (const float& _value) {
    this->x *= _value;
    this->y *= _value;
    return *this;
}

float2 float2::operator* (const float2& _float2) const {
    return float2(x * _float2.x, y * _float2.y);
}

float2 float2::operator*= (const float2& _float2) {
    this->x *= _float2.x;
    this->y *= _float2.y;
    return *this;
}

float2 float2::operator/ (const float& _value) const {
    return float2(x / _value, y / _value);
}

float2 float2::operator/= (const float& _value) {
    this->x /= _value;
    this->y /= _value;
    return *this;
}

float2 float2::operator/ (const float2& _float2) const {
    return float2(x / _float2.x, y / _float2.y);
}

float2 float2::operator/= (const float2& _float2) {
    this->x /= _float2.x;
    this->y /= _float2.y;
    return *this;
}

float float2::Dot(const float2& _float2) const {
    return x * _float2.x + y * _float2.y;
}

float float2::Cross(const float2& _float2) const {
    return x * _float2.x - y * _float2.y;
}

float float2::Length() const {
    return sqrtf(LengthSq());
}

float float2::LengthSq() const {
    return x * x + y * y;
}

void float2::Normalize() {
    const float leng = Length();
    if (leng > 0.0f) *this /= leng; 
}

float2 float2::GetNorm() const {
    const float leng = Length();
    return (leng > 0.0f) ? float2(*this / leng) : float2();
}

float3::float3() : x(0.0f), y(0.0f), z(0.0f) { }
float3::float3(const float& _x, const float& _y, const float& _z) : x(_x), y(_y), z(_z) { }
float3::~float3() { }

float3 float3::operator= (const float3& _float3) {
    this->x = _float3.x;
    this->y = _float3.y;
    this->z = _float3.z;
    return *this;
}

float3 float3::operator+ (const float3& _float3) const {
    return float3(x + _float3.x, y + _float3.y, z + _float3.z);
}

float3 float3::operator+= (const float3& _float3) {
    this->x += _float3.x;
    this->y += _float3.y;
    this->z += _float3.z;
    return *this;
}

float3 float3::operator- () const {
    return float3(x * -1.0f, y * -1.0f, z * -1.0f);
}

float3 float3::operator-= (const float3& _float3) {
    this->x -= _float3.x;
    this->y -= _float3.y;
    this->z -= _float3.z;
    return *this;
}

float3 float3::operator* (const float& _value) const {
    return float3(x * _value, y * _value, z * _value);
}

float3 float3::operator*= (const float& _value) {
    this->x *= _value;
    this->y *= _value;
    this->z *= _value;
    return *this;
}

float3 float3::operator* (const float3& _float3) const {
    return float3(x * _float3.x, y * _float3.y, z * _float3.z);
}

float3 float3::operator*= (const float3& _float3) {
    this->x *= _float3.x;
    this->y *= _float3.y;
    this->z *= _float3.z;
    return *this;
}

float3 float3::operator/ (const float& _value) const {
    return float3(x / _value, y / _value, z / _value);
}

float3 float3::operator/= (const float& _value) {
    this->x /= _value;
    this->y /= _value;
    this->z /= _value;
    return *this;
}

float3 float3::operator/ (const float3& _float3) const {
    return float3(x / _float3.x, y / _float3.y, z / _float3.z);
}

float3 float3::operator/= (const float3& _float3) {
    this->x /= _float3.x;
    this->y /= _float3.y;
    this->z /= _float3.z;
    return *this;
}

float float3::Dot(const float3& _float3) const {
    return x * _float3.x + y * _float3.y + z * _float3.z;
}

float3 float3::Cross(const float3& _float3) const {
    return float3(y * _float3.z - z * _float3.y, z * _float3.x - x * _float3.z, x * _float3.y - y * _float3.x);
}

float float3::Length() const {
    return sqrtf(LengthSq());
}

float float3::LengthSq() const {
    return x * x + y * y + z * z;
}

void float3::Normalize() {
    const float leng = Length();
    if (leng > 0.0f) *this /= leng;
}

float3 float3::GetNorm() const {
    const float leng = Length();
    return (leng > 0.0f) ? float3(*this / leng) : float3();
}