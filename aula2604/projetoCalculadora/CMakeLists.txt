cmake_minimum_required(VERSION 3.30)
project(projetoCalculadora C)

set(CMAKE_C_STANDARD 11)

add_executable(projetoCalculadora calcApp.c
        calculadora.c
        calculadora.h)
