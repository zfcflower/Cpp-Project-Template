/**
 * @file foo_test.cpp
 * @brief The public tests for the @p foo library.
 *
 * @details
 * These tests are public for users and only for the methods declared in the @p include/foo/foo.h file.
 * Normally, the test results will be reviewed by both developers and users.
 */

#include "foo/foo.h"

#include <gtest/gtest.h>


TEST(Foo, Max) {
    EXPECT_EQ((Max(0, 0)), 0);
    EXPECT_EQ((Max(1, 2)), 2);
    EXPECT_EQ((Max(-1, 1)), 1);
}