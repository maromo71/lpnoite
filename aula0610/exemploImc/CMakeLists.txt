cmake_minimum_required(VERSION 4.0)
project(exemploImc C)

set(CMAKE_C_STANDARD 11)

add_executable(exemploImc main.c
        imc.c
        imc.h)
