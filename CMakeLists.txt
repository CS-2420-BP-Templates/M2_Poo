cmake_minimum_required(VERSION 4.1) # Nota: Asegúrate de que tu versión de CMake sea compatible (CLion suele sugerir 3.20+)
project(M2_Poo)

set(CMAKE_CXX_STANDARD 14)

# Asegura que busque los headers en el directorio actual
include_directories(.)

# 1. EJECUTABLE PRINCIPAL (El juego que los alumnos completan y juegan)
add_executable(M2_Poo
        main.cpp
        Personaje.h
        Personaje.cpp
        Heroes.h
        Heroes.cpp
)

# 2. EJECUTABLE DE PRUEBAS (El que usa GitHub Classroom / Autograding)
add_executable(runTests
        test.cpp
        Personaje.h
        Personaje.cpp
        Heroes.h
        Heroes.cpp
)