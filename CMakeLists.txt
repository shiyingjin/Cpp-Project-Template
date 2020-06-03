cmake_minimum_required(VERSION 3.2)

project(Demo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set default compile flags for GCC
if(CMAKE_COMPILER_IS_GNUCXX)
    message(STATUS "GCC detected, adding compile flags")
    add_compile_options(-Wpedantic -Wall -Wextra -Wconversion -Werror)
endif(CMAKE_COMPILER_IS_GNUCXX)

include_directories(${PROJECT_SOURCE_DIR})

set(SRC_LIST "lib/demo.cc")

add_executable(${PROJECT_NAME} "main/main.cc" ${SRC_LIST})

include(GoogleTest)
enable_testing()
set(TEST_LIBS gtest_main)
add_subdirectory("${PROJECT_SOURCE_DIR}/extern/googletest" "extern/googletest" EXCLUDE_FROM_ALL)

if(MSVC)
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif()

set(TEST_TARGET "${PROJECT_NAME}-Test")
set(TEST_SRC_LIST ${SRC_LIST} "lib/demo_test.cc")
add_executable(${TEST_TARGET} ${TEST_SRC_LIST})
target_link_libraries(${TEST_TARGET} ${TEST_LIBS})
gtest_discover_tests(${TEST_TARGET})
