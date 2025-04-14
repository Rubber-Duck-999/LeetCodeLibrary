cmake_minimum_required(VERSION 3.22)

# Name of the test binary
set(PROJECT_TEST_NAME ${PROJECT_NAME}-Test)

enable_testing()

# Include dirs
include_directories(${PROJECT_SOURCE_DIR}/${INCL_DIR})

# Gather test source files
file(GLOB TEST_SOURCES "src/*.cc")

# Test executable (includes test files + main source)
add_executable(${PROJECT_TEST_NAME}
    ${TEST_SOURCES}
)

# Link with main library
target_link_libraries(${PROJECT_TEST_NAME}
    libLeetCodeLibrary
    gtest
    gtest_main
)

# Optional: automatically discover tests
include(GoogleTest)
gtest_discover_tests(${PROJECT_TEST_NAME})
