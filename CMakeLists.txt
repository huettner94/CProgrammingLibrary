cmake_minimum_required(VERSION 3.13)
project(Project C)

set(CMAKE_C_STANDARD 99)

SET(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -g -Wall")
SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -g")

include_directories(./include)
include_directories(./src)

add_executable(Project
        include/main.h include/func.h
        src/main.c src/func.c src/help.c src/menu.c )
