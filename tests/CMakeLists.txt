# Create a public test.
add_executable(public-test)

# Set test files.
target_sources(public-test
    PRIVATE
        foo_test.cpp
)

# Link the corresponding libraries.
target_link_libraries(public-test
    PRIVATE
        foo
)

# Link GoogleTest.
target_link_libraries(public-test
    PRIVATE
        ${GTEST_LIBS}
        ${GMOCK_LIBS}
)

# Add the test with CTest.
gtest_discover_tests(public-test)