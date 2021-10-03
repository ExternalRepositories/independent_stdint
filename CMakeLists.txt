cmake_minimum_required(VERSION 3.13.0)
project(independent_stdint VERSION 1.0
        DESCRIPTION "A header only c/c++ library for compiler independent stdint"
        HOMEPAGE_URL "https://https://github.com/antonkesy/independent_int"
        )

include(test/CMakeLists.txt)
include(example/CMakeLists.txt)

add_library(${PROJECT_NAME} INTERFACE)
target_sources(${PROJECT_NAME} INTERFACE independent_stdint.h)