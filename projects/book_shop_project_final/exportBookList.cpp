#include "exportBookList.h"

void exportBookList(std::vector<Book> &books)
{
    std::ofstream myfile;
    myfile.open("book_list");

    // Iterating through each book in books, and writing to book_list.
    for (Book book : books)
    {
        myfile << book.getTitleName() << "\n";
        myfile << book.getAuthorName() << "\n";
        myfile << book.getPublisherName() << "\n";
        myfile << book.getPrice() << "\n";
        myfile << book.getNumberOfCopies() << "\n";
        myfile << "\n";
    }
    myfile.close();
    std::cout << "\nExport completed!\n";
}