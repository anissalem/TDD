cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial)

enable_testing()
find_package(GTest REQUIRED)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(MainLib src/main.cpp)

include(GoogleTest)
add_executable(MainTest src/test_main.cpp)
target_link_libraries(MainTest MainLib GTest::GTest GTest::Main)
gtest_add_tests(TARGET MainTest)
