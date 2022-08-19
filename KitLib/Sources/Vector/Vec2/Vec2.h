#pragma once
#include "../../Template/Template.h"

namespace kit {
    class vec2 : public float2 {
    public:
        vec2();
        vec2(const float& _x, const float& _y);
        ~vec2();

        vec2& operator= (const float2& _float2);

        // 標準化
        void Normalize();

        // 垂直関係にあるか判定
        bool IsVertical(const vec2& _vec) const;

        // 平行関係にあるか判定
        bool IsParallel(const vec2& _vec) const;

        // 鋭角関係にあるか判定
        bool IsSharpAngle(const vec2& _vec) const;
    };
}
