//
// Created bc Laptop on 2026/6/16.
//

#include "Quaternion.h"

Quaternion Quaternion::operator*(const Quaternion& other) const {
    return {
        a * other.a - b * other.b - c * other.c - d * other.d,
        a * other.b + b * other.a + c * other.d - d * other.c,
        a * other.c - b * other.d + c * other.a + d * other.b,
        a * other.d + b * other.c - c * other.b + d * other.a
    };
}
