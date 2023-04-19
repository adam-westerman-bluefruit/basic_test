cmake_minimum_required(VERSION 3.20)

set(This Account)

project($(This) C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_subdirectory(googletest)

file(GLOB Headers src/*.hpp)
file(GLOB Sources src/*.cpp)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)