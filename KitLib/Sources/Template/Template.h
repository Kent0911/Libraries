#pragma once
#include "../pch/pch.h"

#define _OX_EPSILON_ 0.000001f // 誤差

namespace kit {
    class float2 {
    public:
        float x, y;

        float2();
        float2(const float& _x, const float& _y);
        ~float2();

        float2 operator=(const float2 &_float2);
        float2 operator+(const float2 &_float2) const;
        float2 operator+= (const float2& _float2);
        float2 operator- () const;
        float2 operator- (const float2& _float2) const;
        float2 operator-= (const float2& float2);
        float2 operator* (const float& _value) const;
        float2 operator*= (const float& _value);
        float2 operator* (const float2& _float2) const;
        float2 operator*= (const float2& _float2);
        float2 operator/ (const float& _value) const;
        float2 operator/= (const float& _value);
        float2 operator/ (const float2& _float2) const;
        float2 operator/= (const float2& _float2);

        friend float2 operator* (const float& _value, const float2& _float2) {
            return float2(_float2.x * _value, _float2.y * _value);
        }
        friend float2 operator/ (const float& _value, const float2& _float2) {
            return float2(_float2.x / _value, _float2.y / _value);
        }

        // ベクトルの内積
        float Dot(const float2& _float2) const;
        // ベクトルの外積
        float Cross(const float2& _float2) const;
        
        // 長さを取得
        float Length() const;
        float LengthSq() const;

        // 標準化
        void Normalize();
        float2 GetNorm() const;
    };

    class float3 {
    public:
        float x, y, z;

        float3();
        float3(const float& _x, const float& _y, const float& _z);
        ~float3();

        float3 operator= (const float3& _float3);
        float3 operator+ (const float3& _float3) const;
        float3 operator+= (const float3& _float3);
        float3 operator- () const;
        float3 operator-= (const float3& _float3);
        float3 operator* (const float& _value) const;
        float3 operator*= (const float& _value);
        float3 operator* (const float3& _float3) const;
        float3 operator*= (const float3& _float3);
        float3 operator/ (const float& _value) const;
        float3 operator/= (const float& _value);
        float3 operator/ (const float3& _float3) const;
        float3 operator/= (const float3& _float3);

        friend float3 operator* (const float& _value, const float3& _float3) {
            return float3(_float3.x * _value, _float3.y * _value, _float3.z * _value);
        }
        friend float3 operator/ (const float& _value, const float3& _float3) {
            return float3(_float3.x / _value, _float3.y / _value, _float3.z / _value);
        }

        // ベクトルの内積
        float Dot(const float3& _float3) const;

        // ベクトルの外積
        float3 Cross(const float3& _float3) const;

        // 長さを取得
        float Length() const;
        float LengthSq() const;

        // 標準化
        void Normalize();
        float3 GetNorm() const;
    };
}