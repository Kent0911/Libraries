#pragma once
#include "../../Template/Template.h"

namespace kit {
    class vec3 : public float3 {
    public:
        vec3();
        vec3(const float& _x, const float& _y, const float& _z);
        ~vec3();

        vec3& operator= (const float3& _float3);

        // 標準化
        void Normalize();

        // 垂直関係にあるか判定
        bool IsVertical(const vec3& _vec) const;

        // 平行関係にあるか判定
        bool IsParallel(const vec3& _vec) const;

        // 鋭角関係にあるか判定
        bool IsSharpAngle(const vec3& _vec) const;
    };
}