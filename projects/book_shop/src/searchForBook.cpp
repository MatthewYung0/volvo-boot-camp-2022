#include "searchForBook.h"

void searchForBook(std::vector<Book> &books, const int books_size)
{
    int index = existsInVector(books, books_size);

    if (index > -1)
    {
        std::cout << "\nBook\n";
        std::cout << "----\n";
        std::cout << "Title: " << books[index].getTitleName() << std::endl;
        std::cout << "Author: " << books[index].getAuthorName() << std::endl;
        std::cout << "Price: " << books[index].getPrice() << " sek" << std::endl;
        std::cout << "Number Of Copies: " << books[index].getNumberOfCopies() << std::endl;
        return;
    }
    std::cout << "Book not found!\n";
}