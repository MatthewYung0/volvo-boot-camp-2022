cmake_minimum_required(VERSION 3.10)

project(InputHandler)

file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_library(_sock_can STATIC ../../libs/socket_can/src/socket_can.cpp)

add_executable(${PROJECT_NAME} main.cpp ${SRC_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(${PROJECT_NAME} PUBLIC ../../libs/common)
target_include_directories(_sock_can PUBLIC ../../libs/socket_can/include)

find_package(Curses REQUIRED)

target_link_libraries(${PROJECT_NAME} PUBLIC ${CURSES_LIBRARIES})
target_link_libraries(${PROJECT_NAME} PUBLIC _sock_can)