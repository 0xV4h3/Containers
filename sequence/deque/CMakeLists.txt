add_library(deque INTERFACE)
target_sources(deque INTERFACE deque.hpp)
target_include_directories(deque INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})