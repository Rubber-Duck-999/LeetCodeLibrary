cmake_minimum_required(VERSION 3.14)

project(libLeetCodeLibrary VERSION 1.0 LANGUAGES CXX)

# Source files folder
set (SRC_DIR src)

# Header files folder
set (INCL_DIR include)

include_directories(${INCL_DIR})

set (SOURCE
    ${SRC_DIR}/TwoSum.cc
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -O3 -Wall -Werror -fsanitize=address -static-libasan -g")

add_library(libLeetCodeLibrary STATIC ${SOURCE})

# Specify the include directories for the library
target_include_directories(libLeetCodeLibrary PUBLIC include)

add_subdirectory(tests)