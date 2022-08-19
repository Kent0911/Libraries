#pragma once
#include "../../Template/Template.h"

namespace kit {
    class vec3 : public float3 {
    public:
        vec3();
        vec3(const float& _x, const float& _y, const float& _z);
        ~vec3();

        vec3& operator= (const float3& _float3);

        // �W����
        void Normalize();

        // �����֌W�ɂ��邩����
        bool IsVertical(const vec3& _vec) const;

        // ���s�֌W�ɂ��邩����
        bool IsParallel(const vec3& _vec) const;

        // �s�p�֌W�ɂ��邩����
        bool IsSharpAngle(const vec3& _vec) const;
    };
}