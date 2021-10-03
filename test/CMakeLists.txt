cmake_minimum_required(VERSION 3.13.0)

add_executable(test_value ${CMAKE_CURRENT_LIST_DIR}/test_value_x.c)

enable_testing()
add_test(value_test test_value)
set_tests_properties(value_test PROPERTIES WILL_FAIL FALSE)