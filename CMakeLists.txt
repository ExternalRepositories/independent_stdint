cmake_minimum_required(VERSION 3.13.0)
project(independent_int)

add_library(independent_int INTERFACE)
target_sources(independent_int INTERFACE independent_int.h)

