#include "existsInVector.h"

int existsInVector(std::vector<Book> &books, const int books_size)
{
    std::string title;
    std::string author;
    std::cin.ignore();
    std::cout << "\nEnter Title Of Book: ";
    std::getline(std::cin, title);
    std::cout << "Enter Author Of Book: ";
    std::getline(std::cin, author);
    std::cin.clear();
    for (int i = 0; i < books_size; i++)
    {
        // If book is found, index of book in array is returned
        if (books[i].getTitleName() == title && books[i].getAuthorName() == author)
        {
            return i;
        }
    }
    return -1;
}