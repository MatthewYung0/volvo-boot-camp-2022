cmake_minimum_required(VERSION 2.4)

project(bookshop)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(bookshop_app main.cpp Book.cpp checkInput.cpp printMenu.cpp printEditDetailsMenu.cpp addBookToArray.cpp buyBook.cpp searchForBook.cpp changeBookDetails.cpp importBookList.cpp exportBookList.cpp printAllBooks.cpp run.cpp)