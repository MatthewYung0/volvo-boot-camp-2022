cmake_minimum_required(VERSION 3.13.4)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(can_reader)

add_library(can_reader_lib SHARED 
            src/can_message.cpp
            src/socket_can_setup.cpp
            src/socket_can.cpp)

target_include_directories(can_reader_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

find_package(Curses REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} can_reader_lib)
target_link_libraries(${PROJECT_NAME} curses)