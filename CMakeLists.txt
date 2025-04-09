cmake_minimum_required(VERSION 3.27)
project(task_manager)

set(CMAKE_CXX_STANDARD 17)

add_executable(task_manager main.cpp
        Task.cpp
        Task.h
        menu.h
        menu.cpp)
