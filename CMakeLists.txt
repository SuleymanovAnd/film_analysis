cmake_minimum_required(VERSION 3.22)
project(film_analysis)

set(CMAKE_CXX_STANDARD 14)
set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)
add_subdirectory(src)

target_link_libraries(film_analysis PRIVATE nlohmann_json::nlohmann_json)
