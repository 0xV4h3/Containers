add_library(queue INTERFACE)
target_sources(queue INTERFACE queue.hpp)
target_include_directories(queue INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${PROJECT_SOURCE_DIR}/sequence/deque
        ${PROJECT_SOURCE_DIR}/sequence/list
)
target_link_libraries(queue INTERFACE deque)
target_link_libraries(queue INTERFACE list)