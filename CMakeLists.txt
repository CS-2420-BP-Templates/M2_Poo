cmake_minimum_required(VERSION 4.1)
project(M2_Poo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(M2_Poo
        Heroes.cpp
        Heroes.h
        main.cpp
        Personaje.cpp
        Personaje.h
        test.cpp)
