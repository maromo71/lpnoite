cmake_minimum_required(VERSION 3.26)
project(exemplo01 C)

set(CMAKE_C_STANDARD 11)

add_executable(exemplo01 main.c
        math_operations.c
        math_operations.h)
