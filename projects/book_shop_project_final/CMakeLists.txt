<<<<<<< HEAD
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(book_shop_app VERSION 1.0)

file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(book_shop_app main.cpp ${SRC_FILES})
target_include_directories(book_shop_app PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# cmake_minimum_required(VERSION 2.4)

# project(bookshop)

# include_directories(${PROJECT_SOURCE_DIR})
# add_executable(bookshop_app main.cpp Book.cpp checkInput.cpp printMenu.cpp printEditDetailsMenu.cpp addBookToArray.cpp buyBook.cpp searchForBook.cpp changeBookDetails.cpp importBookList.cpp exportBookList.cpp printAllBooks.cpp run.cpp)
=======
cmake_minimum_required(VERSION 2.4)

project(bookshop)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(bookshop_app main.cpp Book.cpp checkInput.cpp printMenu.cpp printEditDetailsMenu.cpp addBookToArray.cpp buyBook.cpp searchForBook.cpp changeBookDetails.cpp importBookList.cpp exportBookList.cpp printAllBooks.cpp run.cpp)
>>>>>>> ee44dec844557a67e706fd10376d5225c7a67365
