#pragma once
#include "../../Template/Template.h"

namespace kit {
    class vec2 : public float2 {
    public:
        vec2();
        vec2(const float& _x, const float& _y);
        ~vec2();

        vec2& operator= (const float2& _float2);

        // �W����
        void Normalize();

        // �����֌W�ɂ��邩����
        bool IsVertical(const vec2& _vec) const;

        // ���s�֌W�ɂ��邩����
        bool IsParallel(const vec2& _vec) const;

        // �s�p�֌W�ɂ��邩����
        bool IsSharpAngle(const vec2& _vec) const;
    };
}
