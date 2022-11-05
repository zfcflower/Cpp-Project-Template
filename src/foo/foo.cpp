/**
 * @file foo.cpp
 * @brief The main implementation for the @p foo library.
 *
 * @details
 * Normally, if @p foo is simple, this file is the only implementation file it needs.
 * It contains the implementation of all the methods declared in the @p include/foo/foo.h file.
 *
 * If @p foo is complex, its implementation can be divided into sub-files for better code maintenance:
 *   - @p private_foo.h
 *   - @p private_foo.cpp
 * The tests should also be divided into public tests and private tests.
 * These sub-files should not be made public for users so they are defined in the current folder.
 */

#include "foo.h"
#include "private_foo.h"


int Max(const int lhs, const int rhs) noexcept {
    return MaxImpl(lhs, rhs);
}