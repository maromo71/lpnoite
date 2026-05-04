cmake_minimum_required(VERSION 4.2)
project(prjEscolar C)

set(CMAKE_C_STANDARD 11)

add_executable(prjEscolar main.c
        Aluno.c
        Aluno.h)
