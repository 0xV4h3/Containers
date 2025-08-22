add_executable(test_set test_set.cpp)
target_link_libraries(test_set PRIVATE set)
add_test(NAME SetTest COMMAND test_set)