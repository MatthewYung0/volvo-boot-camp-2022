#include "run.h"

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

void run()
{
    int user_selection = -1;
    int number_of_records = 0;
    bool notExit = true;

    // Array to hold book objects.
    std::vector<Book> books;
    // Importing book list from text file.
    importBookList(books);
    while (notExit)
    {
        number_of_records = books.size();
        printMenu();
        std::cin >> user_selection;
        if (checkInput())
        {
            switch (user_selection)
            {
            case 1:
            {
                Book new_book;
                new_book.updateVariables();
                addBookToArray(books, number_of_records, new_book);
                break;
            }
            case 2:
            {
                buyBook(books, number_of_records);
                break;
            }
            case 3:
            {
                searchForBook(books, number_of_records);
                break;
            }
            case 4:
            {
                changeBookDetails(books, number_of_records);
                break;
            }
            case 5:
            {
                printAllBooks(books);
                break;
            }
            case 6:
            {
                exportBookList(books);
                break;
            }
            case 7:
            {
                notExit = false;
                break;
            }
            }
        }
    }
    books.clear();
}