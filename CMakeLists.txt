cmake_minimum_required (VERSION 3.29)
project (MB_Caso_Final_Integrador_Tema_3)

set (CMAKE_CXX_STANDARD 14)

include_directories (.)

add_executable (MB_Caso_Final_Integrador_Tema_3
        Ejercicio/main.cpp
        Ejercicio/tinylisp.cpp)