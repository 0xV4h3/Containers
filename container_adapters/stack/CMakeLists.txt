add_library(stack INTERFACE)
target_sources(stack INTERFACE stack.hpp)
target_include_directories(stack INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${PROJECT_SOURCE_DIR}/sequence/vector
        ${PROJECT_SOURCE_DIR}/sequence/deque
        ${PROJECT_SOURCE_DIR}/sequence/list
)
target_link_libraries(stack INTERFACE vector)
target_link_libraries(stack INTERFACE deque)
target_link_libraries(stack INTERFACE list)