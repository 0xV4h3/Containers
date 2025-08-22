add_executable(test_array test_array.cpp)
target_link_libraries(test_array PRIVATE array)
add_test(NAME ArrayTest COMMAND test_array)