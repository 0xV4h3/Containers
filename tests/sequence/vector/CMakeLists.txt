add_executable(test_vector test_vector.cpp)
target_link_libraries(test_vector PRIVATE vector)
add_test(NAME VectorTest COMMAND test_vector)