add_library(priority_queue INTERFACE)
target_sources(priority_queue INTERFACE priority_queue.hpp)
target_include_directories(priority_queue INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${PROJECT_SOURCE_DIR}/sequence/vector
        ${PROJECT_SOURCE_DIR}/sequence/deque
)
target_link_libraries(priority_queue INTERFACE vector)
target_link_libraries(priority_queue INTERFACE deque)