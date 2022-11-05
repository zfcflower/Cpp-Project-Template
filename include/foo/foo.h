/**
 * @file foo.h
 * @brief The public header for the @p foo library.
 *
 * @details
 * Typically, this file contains only declarations that users need to know.
 * The implementation should not be defined here but in the @p src/foo folder.
 *
 * The methods declared here can be tested in the public test @p tests/foo_test.cpp.
 */

#pragma once

//! Get the maximum of two numbers.
int Max(int lhs, int rhs) noexcept;