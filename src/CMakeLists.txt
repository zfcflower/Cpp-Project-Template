# Create the main program.
add_executable(${CMAKE_PROJECT_NAME})

# Set source files.
target_sources(${CMAKE_PROJECT_NAME}
    PRIVATE
        main.cpp
)