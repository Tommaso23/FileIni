cmake_minimum_required(VERSION 3.17)
project(Laboratorio)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(test)

set(SOURCE_FILES main.cpp IniFile.cpp IniFile.h)
add_executable(Laboratorio main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(Laboratorio core)
