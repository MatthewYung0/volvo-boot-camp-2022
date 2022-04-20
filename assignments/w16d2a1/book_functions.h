#pragma once

#include "Book.h"
#include <cstring>
#include <string.h>
#include <vector>
#include <fstream>
#include <iostream>

void printMenu();
void printEditDetailsMenu();
void addBookToArray(std::vector<Book>& books, int books_size, Book book);
int existsInVector(std::vector<Book>& books, int books_size);
void buyBook(std::vector<Book>& books, int books_size);
void searchForBook(std::vector<Book>& books, int books_size);
void changeBookDetails(std::vector<Book>& books, int books_size);
void importBookList(std::vector<Book>& books);
void exportBookList(std::vector<Book>& books);
void printAllBooks(std::vector<Book>& books);
void run();