cmake_minimum_required(VERSION 3.13.0)
project(independent_int VERSION 1.0
        DESCRIPTION "A header only c/c++ library for compiler independent stdint"
        HOMEPAGE_URL "https://https://github.com/antonkesy/independent_int"
        )

#set build to release by default
#use -DCMAKE_BUILD_TYPE=Debug to run tests
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif ()

#enable testing if cmake is debug
IF (CMAKE_BUILD_TYPE MATCHES DEBUG)
    include(test/CMakeLists.txt)
ENDIF (CMAKE_BUILD_TYPE MATCHES DEBUG)

add_library(independent_int INTERFACE)
target_sources(independent_int INTERFACE independent_int.h)

