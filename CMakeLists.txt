cmake_minimum_required(VERSION 3.29)
project(Libreria_estandar_de_C C)

set(CMAKE_C_STANDARD 11)

include_directories(archivos)
include_directories(cadenas)
include_directories(funciones_comunes)

add_executable(Libreria_estandar_de_C
    archivos/cadenas.c
    archivos/cadenas.h
    cadenas/cadenas.c
    cadenas/cadenas.h
    funciones_comunes/funciones_comunes.c
    funciones_comunes/funciones_comunes.h
    main.c)
