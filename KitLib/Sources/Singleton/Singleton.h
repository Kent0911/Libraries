#pragma once
#include "../pch/pch.h"
#include <memory>

namespace kit {
    template <class T>
    class Singleton {
    private:
        typedef std::unique_ptr<T> singleton_pointer_type;

        inline static T* CreateInstance() {
            return new T();
        }

        inline static T& GetRefarence(const singleton_pointer_type& _ptr) {
            return *_ptr;
        }

    protected:
        Singleton() { }

    public:
        static T& GetInstance() {
            static typename T::Singleton_pointer_type s_singleton(T::CreateInstance());
            return GetRefarence(s_singleton);
        }

    private:
        Singleton(const Singleton&) = delete;
        Singleton& operator=(const Singleton&) = delete;
        Singleton(Singleton&&) = delete;
        Singleton& operator=(Singleton&&) = delete;
    };
}