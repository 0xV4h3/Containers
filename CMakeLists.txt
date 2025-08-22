cmake_minimum_required(VERSION 3.31)
project(containers LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(sequence)
add_subdirectory(associative)
add_subdirectory(unordered_associative)
add_subdirectory(container_adapters)
add_subdirectory(data_structures)
add_subdirectory(tests)

enable_testing()
