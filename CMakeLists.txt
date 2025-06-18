cmake_minimum_required(VERSION 3.31)
project(ProgramingExersice)

set(CMAKE_CXX_STANDARD 20)

# Ejecutable para tu avance específico
add_executable(ProgramingExersice
        creadores_digitales_senior_modulo_4/g_concert_tikets.cpp)

# Ejecutable general para todos los archivos cpp (del repositorio remoto)
file(GLOB SOURCES "*.cpp")
if(SOURCES)
    add_executable(competencia ${SOURCES})
endif()
