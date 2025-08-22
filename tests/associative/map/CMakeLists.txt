add_executable(test_map test_map.cpp)
target_link_libraries(test_map PRIVATE map)
add_test(NAME MapTest COMMAND test_map)