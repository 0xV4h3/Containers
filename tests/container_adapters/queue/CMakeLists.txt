add_executable(test_queue test_queue.cpp)
target_link_libraries(test_queue PRIVATE queue)
add_test(NAME QueueTest COMMAND test_queue)