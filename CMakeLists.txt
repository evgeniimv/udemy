cmake_minimum_required(VERSION 4.0)
project(udemy)

set(CMAKE_CXX_STANDARD 20)

add_executable(udemy main.cpp
        helloworld.cpp
        c++/pointer/1_pointer.cpp
        c++/pointer/2_pointer_arithmetic.cpp
        c++/pointer/3_pointer_casting.cpp
        c++/pointer/4_pointer_generic.cpp
        c++/pointer/5_pointer_to_pointer.cpp
        c++/pointer/6_pointer_in_function_args.cpp
        c++/pointer/arrays/1_pointer_arrays.cpp
        c++/c_and_c++_diff/arrays.cpp
        c++/data_types/types.cpp
        c++/pointer/7_pointer_strings.cpp
        c++/pointer/arrays/2_pointer_arrays_decay.cpp
        c++/pointer/arrays/3_string_as_an_array.cpp
        c++/pointer/arrays/4_multidimensional_arrays.cpp
        c++/pointer/memory/dynamic_memory.cpp
        c++/pointer/memory/c_style_management.cpp
        c++/pointer/memory/namespace_exp.cpp
        c++/pointer/functions/function_pointers.cpp
        c++/pointer/functions/function_callback_via_pointer.cpp
)
