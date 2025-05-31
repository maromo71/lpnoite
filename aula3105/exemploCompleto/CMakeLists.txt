cmake_minimum_required(VERSION 3.31)
project(exemploCompleto C)

set(CMAKE_C_STANDARD 11)

add_executable(exemploCompleto main.c
        aluno.c
        aluno.h)
