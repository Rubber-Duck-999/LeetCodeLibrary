cmake_minimum_required(VERSION 3.14)

project(libLeetCodeLibrary VERSION 1.0 LANGUAGES CXX)

# Source and header directories
set(SRC_DIR src)
set(INCL_DIR include)

# Include headers
include_directories(${INCL_DIR})

# Automatically find all .cc files in src/
file(GLOB SOURCE "${SRC_DIR}/*.cc")

# Compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -O3 -Wall -Werror -fsanitize=address -static-libasan -g")

# Static library
add_library(libLeetCodeLibrary STATIC ${SOURCE})

# Header directory for consumers
target_include_directories(libLeetCodeLibrary PUBLIC ${INCL_DIR})

# Add tests subdirectory
add_subdirectory(tests)
