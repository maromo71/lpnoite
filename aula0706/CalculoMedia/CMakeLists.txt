cmake_minimum_required(VERSION 3.31)
project(CalculoMedia C)

set(CMAKE_C_STANDARD 11)

add_executable(CalculoMedia main.c
        aluno.c
        aluno.h)
