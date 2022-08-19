#pragma once
#include "../../Template/Template.h"

namespace kit {
    class vec2 : public float2 {
    public:
        vec2();
        vec2(const float& _x, const float& _y);
        ~vec2();

        vec2& operator= (const float2& _float2);

        // •W€‰»
        void Normalize();

        // ‚’¼ŠÖŒW‚É‚ ‚é‚©”»’è
        bool IsVertical(const vec2& _vec) const;

        // •½sŠÖŒW‚É‚ ‚é‚©”»’è
        bool IsParallel(const vec2& _vec) const;

        // ‰sŠpŠÖŒW‚É‚ ‚é‚©”»’è
        bool IsSharpAngle(const vec2& _vec) const;
    };
}
