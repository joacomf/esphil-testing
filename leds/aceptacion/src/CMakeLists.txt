add_library(aceptacion "")

target_sources(
    aceptacion
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/libreria/pasos.cpp
          
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/libreria/pasos.hpp
        ${CMAKE_CURRENT_LIST_DIR}/libreria/claves.hpp
    )

target_include_directories(
    aceptacion
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
