/**
 * @file private_foo.cpp
 * @brief The implementation for the @p private_foo.h file.
 */

#include "private_foo.h"

#include <algorithm>


int MaxImpl(const int lhs, const int rhs) noexcept {
    return std::max(lhs, rhs);
}