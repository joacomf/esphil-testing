add_library(aceptacion "")

target_sources(
    aceptacion
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/Hardsting/Hardsting.cpp
          
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/Hardsting/Hardsting.hpp
        ${CMAKE_CURRENT_LIST_DIR}/libreria/claves.hpp
    )

target_include_directories(
    aceptacion
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
