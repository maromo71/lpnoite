cmake_minimum_required(VERSION 3.29)
project(arq1 C)

set(CMAKE_C_STANDARD 11)

add_executable(arq1 main.c)

# Adiciona o comando chcp 65001 antes de rodar o executável
add_custom_target(run
        COMMAND chcp 65001
        WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)
