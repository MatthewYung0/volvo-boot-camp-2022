#include "printAllBooks.h"

void printAllBooks(std::vector<Book> &books)
{
    for (Book book : books)
    {
        book.printDetails();
    }
}