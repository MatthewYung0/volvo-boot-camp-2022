cmake_minimum_required(VERSION 3.13.4)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(input_handler)

add_library(input_handler_lib SHARED 
            src/can_message.cpp
            src/check_input.cpp
            src/socket_can_setup.cpp
            src/socket_can.cpp)

target_include_directories(input_handler_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

find_package(Curses REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} input_handler_lib)
target_link_libraries(${PROJECT_NAME} curses)