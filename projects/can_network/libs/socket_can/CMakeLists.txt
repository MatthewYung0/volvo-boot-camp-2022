cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(_socket_can VERSION 1.0)

file(GLOB_RECURSE SRC_FILES src/socket_can.cpp)

add_library(${PROJECT_NAME} STATIC src/socket_can.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC include)