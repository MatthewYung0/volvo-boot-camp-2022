#include "Book.h"

Book::Book(){};
Book::Book(std::string author_name, std::string title_name, std::string publisher_name, float price, int number_of_copies)
{
    this->author_name = author_name;
    this->title_name = title_name;
    this->publisher_name = publisher_name;
    this->price = price;
    this->number_of_copies = number_of_copies;
}
Book:: ~Book(){};
std::string Book::getAuthorName()
{
    return author_name;
}
std::string Book::getTitleName()
{
    return title_name;
}
std::string Book:: getPublisherName()
{
    return publisher_name;
}
float Book:: getPrice()
{
    return price;
}
int Book:: getNumberOfCopies()
{
    return number_of_copies;
}
void Book:: setAuthorName(std::string author_name)
{
    this->author_name = author_name;
}
void Book:: setTitleName(std::string title_name)
{
    this->title_name = title_name;
}
void Book:: setPublisherName(std::string publisher_name)
{
    this->publisher_name = publisher_name;
}
void Book:: setPrice(float price)
{
    this->price = price;
}
void Book:: setNumberOfCopies(int number_of_copies)
{
    this->number_of_copies = number_of_copies;
}

bool operator==(const Book &book_one, const Book &book_two)
{
    return ((book_one.author_name == book_two.author_name) &&
            (book_one.title_name == book_two.title_name));
}

void Book::printDetails()
{
    std::cout << "\nTitle: " << getTitleName();
    std::cout << std::endl;
    std::cout << "Author: " << getAuthorName();
    std::cout << std::endl;
    std::cout << "Publisher: " << getPublisherName();
    std::cout << std::endl;
    std::cout << "Price: " << getPrice();
    std::cout << std::endl;
    std::cout << "Number Of Copies: " << getNumberOfCopies();
    std::cout << std::endl;
}

void Book::updateVariables()
{
    // Requesting user input to initialise variables
    std::cin.ignore();
    std::cout << "\nEnter Author Name: ";
    std::getline(std::cin, this->author_name);
    std::cin.clear();
    std::cout << "Enter Title Name: ";
    std::getline(std::cin, this->title_name);
    std::cin.clear();
    std::cout << "Enter Publisher Name: ";
    std::getline(std::cin, this->publisher_name);
    std::cin.clear();
    std::cout << "Enter Price (sek): ";
    std::cin >> this->price;
    std::cin.clear();
    std::cout << "Number Of Copies: ";
    std::cin >> this->number_of_copies;
}