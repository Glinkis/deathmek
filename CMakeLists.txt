cmake_minimum_required(VERSION 3.7)
project(deathmek)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/core/Vector2.h)
add_executable(deathmek ${SOURCE_FILES})

target_compile_options(deathmek PUBLIC -Wall)
