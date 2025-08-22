add_library(list INTERFACE)
target_sources(list INTERFACE list.hpp)
target_include_directories(list INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})