cmake_minimum_required(VERSION 2.8)
project(gittest)

set( test_SRCS
rectangle.cpp
)

add_executable(testexec main.cpp ${test_SRCS})
