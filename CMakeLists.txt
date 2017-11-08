cmake_minimum_required(VERSION 3.8)
project(loki_remove)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c)
add_executable(loki_remove ${SOURCE_FILES})