cmake_minimum_required(VERSION 3.7)
project(Programming_Interviews_Exposed)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        "Stack implementation/stack-implementation.c")

add_executable(Programming_Interviews_Exposed ${SOURCE_FILES})