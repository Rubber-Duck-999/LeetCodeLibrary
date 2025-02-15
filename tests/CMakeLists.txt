cmake_minimum_required(VERSION 3.22)
set (PROJECT_TEST_NAME ${PROJECT_NAME}-Test)

enable_testing()

set (MAIN_SRC_DIR ../src)
include_directories (${PROJECT_SOURCE_DIR}/${INCL_DIR})
# Include all project source files here
set (MAIN_SOURCE
    ${MAIN_SRC_DIR}/TwoSum.cc)

set (TESTS_DIR src)

set(PROJ_UT_SRC
    ${TESTS_DIR}/TestTwoSum.cc
)

include_directories (${PROJECT_SOURCE_DIR}/${INCL_DIR})

add_executable (${PROJECT_TEST_NAME} ${PROJ_UT_SRC} ${MAIN_SOURCE})

link_directories(/usr/local/lib)

# Link libraries
target_link_libraries(${PROJECT_TEST_NAME}
                      gtest)

