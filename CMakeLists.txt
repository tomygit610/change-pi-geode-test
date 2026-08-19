cmake_minimum_required(VERSION 3.13)

# Corregir error de fmt en Clang moderno
add_compile_definitions(FMT_USE_CONSTEXPR=0)

project(custom_pi VERSION 1.0.0)

include(FetchContent)

# Descargar Geode SDK si no existe
if(NOT DEFINED GEODE_SDK)
    set(GEODE_SDK "${CMAKE_CURRENT_SOURCE_DIR}/geode-sdk-clone")
endif()

include("${GEODE_SDK}/cmake/GeodeFile.cmake")

setup_geode_mod(
    ID tomy.custom_pi
    HEADER_ONLY
)
