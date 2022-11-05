/**
 * @file private_foo_test.cpp
 * @brief The private tests for the @p foo library.
 *
 * @details
 * These tests are private for users and only for the methods declared in the @p private_foo.h file.
 * Normally, the test results will only be reviewed by developers.
 */

#include "private_foo.h"

#include <gtest/gtest.h>


TEST(PrivateFoo, Max) {
    EXPECT_EQ((MaxImpl(0, 0)), 0);
    EXPECT_EQ((MaxImpl(1, 2)), 2);
    EXPECT_EQ((MaxImpl(-1, 1)), 1);
}