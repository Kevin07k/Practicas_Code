cmake_minimum_required(VERSION 3.30)
project(Practicas_code)

set(CMAKE_CXX_STANDARD 20)
# Agrega todos los archivos .cpp en el directorio actual
file(GLOB SOURCES "*.cpp")

# Crea el ejecutable con todos los archivos fuente
add_executable(competencia ${SOURCES})
