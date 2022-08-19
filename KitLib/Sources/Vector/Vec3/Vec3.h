#pragma once
#include "../../Template/Template.h"

namespace kit {
    class vec3 : public float3 {
    public:
        vec3();
        vec3(const float& _x, const float& _y, const float& _z);
        ~vec3();

        vec3& operator= (const float3& _float3);

        // •W€‰»
        void Normalize();

        // ‚’¼ŠÖŒW‚É‚ ‚é‚©”»’è
        bool IsVertical(const vec3& _vec) const;

        // •½sŠÖŒW‚É‚ ‚é‚©”»’è
        bool IsParallel(const vec3& _vec) const;

        // ‰sŠpŠÖŒW‚É‚ ‚é‚©”»’è
        bool IsSharpAngle(const vec3& _vec) const;
    };
}