cmake_minimum_required(VERSION 3.7)
project(deathmek)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/base/Entity.cpp src/base/Entity.h src/base/Vector2.cpp src/base/Vector2.h)
target_compile_options(deathmek PRIVATE "-Wall -Wextra -Werror -Wpedantic")
add_executable(deathmek ${SOURCE_FILES})
