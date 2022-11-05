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