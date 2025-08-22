add_executable(test_deque test_deque.cpp)
target_link_libraries(test_deque PRIVATE deque)
add_test(NAME DequeTest COMMAND test_deque)