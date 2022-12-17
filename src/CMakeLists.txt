cmake_minimum_required(VERSION 3.22)
set (MY_DIRECTORY ${CMAKE_SOURCE_DIR}/include)

set(SOURCE
        main.cpp
        actor_search.cpp
        )
set(INCLUDE
        ${MY_DIRECTORY}/actor_search.h
        )


add_executable(film_analysis ${SOURCE} ${INCLUDE})

target_include_directories (film_analysis PUBLIC ${MY_DIRECTORY})