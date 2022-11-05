# Create a library.
add_library(foo)

set(HEADER_PATH ${PROJECT_SOURCE_DIR}/include/foo)

# Set a private header path.
# For the files in the current folder, developers only need to use `foo.h` to include the `include/foo/foo.h` file.
target_include_directories(foo PRIVATE ${HEADER_PATH})

# Set a public header path.
# For other users, they need to use `foo/foo.h` to include the `include/foo/foo.h` file.
# It can prevent name conflicts caused by multiple libraries using header files with the same name.
target_include_directories(foo PUBLIC ${PROJECT_SOURCE_DIR}/include)

# Set source files.
target_sources(foo
    PUBLIC
        # Use the private header path to specify a header file.
        ${HEADER_PATH}/foo.h
    PRIVATE
        foo.cpp
        private_foo.h
        private_foo.cpp
)

###########################################################################################################

# Create a private test.
add_executable(foo-test)

# Set the private header path.
target_include_directories(foo-test
    PRIVATE
        $<TARGET_PROPERTY:foo,INCLUDE_DIRECTORIES>
)

# Set test files.
target_sources(foo-test
    PRIVATE
        private_foo_test.cpp
)

# Link the corresponding libraries.
target_link_libraries(foo-test
    PRIVATE
        # Link public libraries.
        foo
        # Link private libraries.
        $<TARGET_PROPERTY:foo,LINK_LIBRARIES>
)

# Link GoogleTest.
target_link_libraries(foo-test
    PRIVATE
        ${GTEST_LIBS}
        ${GMOCK_LIBS}
)

# Add the test with CTest.
gtest_discover_tests(foo-test)