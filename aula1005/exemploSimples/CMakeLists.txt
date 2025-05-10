cmake_minimum_required(VERSION 3.30)
project(exemploSimples C)

set(CMAKE_C_STANDARD 11)

add_executable(exemploSimples main.c
        biblioteca.c
        biblioteca.h)
