cmake_minimum_required(VERSION 3.29)
project(Single_Linked_List)

set(CMAKE_CXX_STANDARD 26)

add_executable(Single_Linked_List main.cpp
        Node.h
        List.h
        Implementation.cpp)
