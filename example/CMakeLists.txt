cmake_minimum_required(VERSION 3.13.0)

add_executable(example_c ${CMAKE_CURRENT_LIST_DIR}/example.c)
add_executable(example_cpp ${CMAKE_CURRENT_LIST_DIR}/example.cpp)

enable_testing()
add_test(c_example example_c)
add_test(cpp_example example_cpp)
set_tests_properties(c_example cpp_example PROPERTIES WILL_FAIL FALSE)