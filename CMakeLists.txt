cmake_minimum_required(VERSION 3.13)

# Corregir compatibilidad con versiones nuevas de Clang
add_compile_definitions(FMT_USE_CONSTEXPR=0)

project(custom_pi VERSION 1.0.0)

setup_geode_mod(custom_pi)

add_library(custom_pi SHARED
    src/main.cpp
)
