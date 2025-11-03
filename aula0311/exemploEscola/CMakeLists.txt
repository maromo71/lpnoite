cmake_minimum_required(VERSION 4.0)
project(exemploEscola C)

set(CMAKE_C_STANDARD 11)

add_executable(exemploEscola app.c
        aluno.c
        aluno.h)
