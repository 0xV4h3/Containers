add_executable(test_list test_list.cpp)
target_link_libraries(test_list PRIVATE list)
add_test(NAME ListTest COMMAND test_list)