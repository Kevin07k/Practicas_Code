cmake_minimum_required(VERSION 3.31)
project(ProgramingExersice)

set(CMAKE_CXX_STANDARD 20)

# Ejecutable para tu avance específico
add_executable(ProgramingExersice
        creadores_digitales_senior/mod_4/g_concert_tikets.cpp
        creadores_digitales_senior/mod_4/h_sequence_query.cpp
        creadores_digitales_senior/mod_4/i_good_morning.cpp
        creadores_digitales_senior/mod_4/f_dreamer.cpp
        creadores_digitales_senior/mod_5/example_algorithm/prefix_sum_example_implmentation.cpp)

# Ejecutable general para todos los archivos cpp (del repositorio remoto)
file(GLOB SOURCES "*.cpp")
if(SOURCES)
    add_executable(competencia ${SOURCES}
            SlidingWindows/max_sum_in_vector.cpp)
endif()
