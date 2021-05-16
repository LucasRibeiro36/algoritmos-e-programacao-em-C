cmake_minimum_required(VERSION 3.16)
project(algoritmos_e_programacao_em_C C)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(algoritmos_e_programacao_em_C
        Vetores/testedevetor.c)
target_link_libraries(algoritmos_e_programacao_em_C m)