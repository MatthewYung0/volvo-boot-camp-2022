cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(BookShopApp VERSION 1.0)
add_library(bookshoplib SHARED
                               src/addBookToArray.cpp
                               src/Book.cpp
                               src/buyBook.cpp
                               src/changeBookDetails.cpp
                               src/checkInput.cpp
                               src/existsInVector.cpp
                               src/exportBookList.cpp
                               src/importBookList.cpp
                               src/printAllBooks.cpp
                               src/printEditDetailsMenu.cpp
                               src/printMenu.cpp
                               src/run.cpp
                               src/searchForBook.cpp)
target_include_directories(bookshoplib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/header)
add_executable(BookShopApp main.cpp)
target_link_libraries(BookShopApp PUBLIC bookshoplib)