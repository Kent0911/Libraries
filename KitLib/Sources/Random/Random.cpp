#include "Random.h"

using namespace kit;

Random::Random() : m_mt(m_rand_device()) { }

template <class Type>
Type Random::GetRand(const Type& _min, const Type& _max) const {
    std::uniform_real_distribution<Type> dist(_min, _max);
    return dist(m_mt);
}