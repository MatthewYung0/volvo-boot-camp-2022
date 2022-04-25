#include "addBookToArray.h"

void addBookToArray(std::vector<Book> &books, const int books_size, const Book book)
{
    for (int i = 0; i < books_size; i++)
    {
        // Checking if the book already exists in the database
        if (books[i] == book)
        {
            std::cout << "\nBook already exists in database!\n";
            break;
        }
        // If i = books_size - 1, it indicates we've reached end of array.
        else if (i == books_size - 1)
        {
            books.push_back(book);
            std::cout << "\nBook added successfully!\n";
            break;
        }
    }
}