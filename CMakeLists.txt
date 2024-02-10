cmake_minimum_required(VERSION 3.27)
project(param)

set(CMAKE_CXX_STANDARD 23)

add_executable(param main.cpp)

install(TARGETS param DESTINATION bin)
