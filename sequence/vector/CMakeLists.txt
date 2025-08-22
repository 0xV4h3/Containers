add_library(vector INTERFACE)
target_sources(vector INTERFACE vector.hpp)
target_include_directories(vector INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})