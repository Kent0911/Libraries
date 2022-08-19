#pragma once
#include "../pch/pch.h"

namespace kit {
    template <class T>
    class color {
    public:
        T red, green, blue;
        float alpha;

        color operator= (const color& _color);
    };

    // íËå^êF
    namespace stereotyped_colors {
        static const color<unsigned char> black = { 0, 0, 0, 1.0f };
        static const color<unsigned char> maroon = { 127, 0, 0, 1.0f };
        static const color<unsigned char> green = { 0, 255, 0, 1.0f };
        static const color<unsigned char> lime = { 0, 127, 0, 1.0f };
        static const color<unsigned char> olive = { 127, 127, 0, 1.0f };
        static const color<unsigned char> yellow = { 255, 255, 0, 1.0f };
        static const color<unsigned char> navy = { 0, 0, 127, 1.0f };
        static const color<unsigned char> blue = { 0, 0, 255, 1.0f };
        static const color<unsigned char> purple = { 127, 0, 127, 1.0f };
        static const color<unsigned char> magenta = { 255, 0, 255, 1.0f };
        static const color<unsigned char> teal = { 0, 127, 127, 1.0f };
        static const color<unsigned char> cyan = { 0, 255, 255, 1.0f };
        static const color<unsigned char> gray = { 127, 127, 127, 1.0f };
        static const color<unsigned char> white = { 255, 255, 255, 1.0f };
    }
}