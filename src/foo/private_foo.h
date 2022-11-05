/**
 * @file private_foo.h
 *
 * @details
 * When @p foo is complex, this file can contain declarations used in the @p foo.cpp file such as utility methods.
 * For better code maintenance, these declarations should not be made public for users.
 *
 * The methods declared here can be tested in the private test @p private_foo_test.cpp.
 */

#pragma once

//! Get the maximum of two numbers.
int MaxImpl(int lhs, int rhs) noexcept;