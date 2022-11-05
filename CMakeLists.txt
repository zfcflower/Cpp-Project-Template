# Set the minimum CMake version.
cmake_minimum_required(VERSION 3.20.0)

# Set the project name and the language.
project(cpp-sample LANGUAGES CXX)

# Add the `cmake` folder to the list of CMake module folders.
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)
# Inject CMake scripts.
include(hello)

# Set the C++ version to C++11.
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set output folders.
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

# Enable testing.
enable_testing()

# Find GoolgeTest.
find_package(GTest REQUIRED)
set(GTEST_LIBS GTest::gtest GTest::gtest_main)
set(GMOCK_LIBS GTest::gmock GTest::gmock_main)

# Delay test discovery until just prior to test execution.
set(CMAKE_GTEST_DISCOVER_TESTS_DISCOVERY_MODE PRE_TEST)

# Process source files.
add_subdirectory(src)