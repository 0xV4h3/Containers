add_library(array INTERFACE)
target_sources(array INTERFACE array.hpp)
target_include_directories(array INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})