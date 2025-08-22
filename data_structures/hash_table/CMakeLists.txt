add_library(hash_table INTERFACE)
target_sources(hash_table INTERFACE hash_table.hpp)
target_include_directories(hash_table INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})