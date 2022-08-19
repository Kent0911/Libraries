#pragma once
#include "../pch/pch.h"

#include <random>
#include "../Singleton/Singleton.h"

namespace kit {
    class Random : public Singleton<Random> {
    private:
        friend class Singleton<Random>;
        std::mt19937 m_mt;
        std::random_device m_rand_device;

        Random();

    public:
        // min~max‚Ì”ÍˆÍ‚Åƒ‰ƒ“ƒ_ƒ€‚É’l‚ð•Ô‚·
        template <class Type>
        Type GetRand(const Type& _min, const Type& _max) const;
    };
}