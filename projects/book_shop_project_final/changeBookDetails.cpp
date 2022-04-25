#include "changeBookDetails.h"

void changeBookDetails(std::vector<Book> &books, const int books_size)
{
    int index = existsInVector(books, books_size);

    if (index > -1)
    {
        int user_selection = 0;
        float new_price = 0;
        int number_of_copies = 0;
        std::string string_input = "";

        // Menu for selection which attribute to modify
        while (checkInput())
        {
            if (user_selection != 6)
            {
                std::cout << "\nSelect one of the following options to edit";
                printEditDetailsMenu();
                std::cin.clear();
                std::cin >> user_selection;
                switch (user_selection)
                {
                case 1:
                {
                    std::cout << "\nCurrent Title: " << books[index].getTitleName() << std::endl;
                    std::cout << "New Title: ";
                    std::cin.ignore();
                    std::getline(std::cin, string_input);
                    books[index].setTitleName(string_input);
                    break;
                }
                case 2:
                {
                    std::cout << "\nCurrent Author: " << books[index].getAuthorName() << std::endl;
                    std::cout << "New Author: ";
                    std::cin.ignore();
                    std::getline(std::cin, string_input);
                    books[index].setAuthorName(string_input);
                    break;
                }
                case 3:
                {
                    std::cout << "\nCurrent Publisher: " << books[index].getPublisherName() << std::endl;
                    std::cout << "New Publisher: ";
                    std::cin.ignore();
                    std::getline(std::cin, string_input);
                    books[index].setPublisherName(string_input);
                    break;
                }
                case 4:
                {
                    std::cout << "\nCurrent Price: " << books[index].getPrice() << " sek" << std::endl;
                    std::cout << "New Price: ";
                    std::cin.ignore();
                    if (checkInput()) {
                    std::cin >> new_price;
                    books[index].setPrice(new_price);
                    }
                    break;
                }
                case 5:
                {
                    std::cout << "\nCurrent Number Of Copies: " << books[index].getNumberOfCopies() << std::endl;
                    std::cout << "New Number Of Copies: ";
                    std::cin.ignore();
                    if (checkInput()) {
                    std::cin >> number_of_copies;
                    books[index].setNumberOfCopies(number_of_copies);
                    }
                    break;
                }
                }
            }
        }
        return;
    }
    std::cout << "\nBook does not exist!\n";
}