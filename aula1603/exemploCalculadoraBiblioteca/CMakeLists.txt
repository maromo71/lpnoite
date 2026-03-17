cmake_minimum_required(VERSION 4.0)
project(exemploCalculadoraBiblioteca C)

set(CMAKE_C_STANDARD 11)

add_library(exemploCalculadoraBiblioteca SHARED calculadora.c calculadora.h)
