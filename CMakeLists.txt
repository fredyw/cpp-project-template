cmake_minimum_required(VERSION 3.18)
project(cpp_project_template LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(lib/abseil)
add_subdirectory(lib/googletest)

add_library(hello hello.cpp hello.h)
target_include_directories(hello PUBLIC lib/abseil)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE hello absl::strings)

add_executable(hello_test hello_test.cpp)
target_include_directories(hello_test PRIVATE lib/googletest/googletest/include)
target_link_libraries(hello_test hello gtest gtest_main)
