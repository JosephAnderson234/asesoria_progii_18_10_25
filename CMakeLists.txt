cmake_minimum_required(VERSION 3.31)
project(asesoria_progra_ii)

set(CMAKE_CXX_STANDARD 20)

add_executable(asesoria_progra_ii main.cpp)
add_executable(p2 luchadores_clase.cpp
        CLuchador/CLuchador.cpp
        CLuchador/CLuchador.h)
add_executable(p3 pupiletras.cpp)
