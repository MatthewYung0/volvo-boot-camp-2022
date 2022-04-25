#include "buyBook.h"

void buyBook(std::vector<Book> &books, const int books_size)
{
    int index = existsInVector(books, books_size);
    if (index > -1)
    {
        int requested_number = 0;
        std::cout << "Enter Number Of Books to Buy: ";
        std::cin >> requested_number;
        if (checkInput())
        {
            if (books[index].getNumberOfCopies() >= requested_number)
            {
                // Uses setter to deducted number_of_copies.
                books[index].setNumberOfCopies(books[index].getNumberOfCopies() - requested_number);
                std::cout << "\nBook bought sucessfully!";
                std::cout << "\nAmount: " << books[index].getPrice() << " sek";
                std::cout << "\nNumber of copies left: " << books[index].getNumberOfCopies() << std::endl;
                return;
            }
            else
            {
                // If not enough in stock, return error.
                std::cout << "\nNot enough copies for purchase!\n";
                std::cout << "Requested Number Of Books to Buy: " << requested_number << std::endl;
                std::cout << "Number Of Books in Stock: " << books[index].getNumberOfCopies() << std::endl;
                return;
            }
        }
        return;
    }
    std::cin.clear();
    // If book doesn't exist, return error.
    std::cout << "\nBook does not exist!\n";
}