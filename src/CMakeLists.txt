# Create the main program.
add_executable(${CMAKE_PROJECT_NAME})

# Set source files.
target_sources(${CMAKE_PROJECT_NAME}
    PRIVATE
        main.cpp
)

# Process libraries.
add_subdirectory(foo)

# Link libraries.
target_link_libraries(${CMAKE_PROJECT_NAME}
    PRIVATE
        foo
)