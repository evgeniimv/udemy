cmake_minimum_required(VERSION 4.0)
project(udemy)

set(CMAKE_CXX_STANDARD 20)

add_executable(udemy main.cpp
        helloworld.cpp
        pointer/1_pointer.cpp
        pointer/2_pointer_arithmetic.cpp
        pointer/3_pointer_casting.cpp
        pointer/4_pointer_generic.cpp
        pointer/5_pointer_to_pointer.cpp
        pointer/6_pointer_in_function_args.cpp
        pointer/7_pointer_arrays.cpp)
