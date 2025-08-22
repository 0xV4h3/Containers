add_executable(test_stack test_stack.cpp)
target_link_libraries(test_stack PRIVATE stack)
add_test(NAME StackTest COMMAND test_stack)