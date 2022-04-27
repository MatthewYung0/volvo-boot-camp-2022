#include "run.h"

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