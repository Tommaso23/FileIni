cmake_minimum_required(VERSION 3.17)
project(Laboratorio)

set(CMAKE_CXX_STANDARD 14)


add_subdirectory(/Users/tommasobucaioni/CLionProject/Laboratorio/test/lib/google_tests)
set(gtest_SOURCE-DIR, /Users/tommasobucaioni/CLionProject/Laboratorio/test/lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


set(SOURCE_FILES test.cpp)
add_executable(test runAllTest.cpp ${SOURCE_FILES})
target_link_libraries(test gtest gtest_main core)