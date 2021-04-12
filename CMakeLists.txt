cmake_minimum_required(VERSION 3.19)
project(impl_oo_in_c C)

set(CMAKE_C_STANDARD 99)

add_executable(impl_oo_in_c main.c datatypes/set.h datatypes/set.c)