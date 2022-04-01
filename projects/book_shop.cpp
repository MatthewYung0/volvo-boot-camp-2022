#include <iostream>
#include <cstring>
#include <string.h>

class Book
{
private:
    std::string author_name;
    std::string title_name;
    std::string publisher_name;
    float price;
    int number_of_copies;

public:
    Book(){};
    Book(std::string author_name, std::string title_name, std::string publisher_name, float price, int number_of_copies)
    {
        this->author_name = author_name;
        this->title_name = title_name;
        this->publisher_name = publisher_name;
        this->price = price;
        this->number_of_copies = number_of_copies;
    }
    ~Book(){};
    std::string getAuthorName()
    {
        return author_name;
    }
    std::string getTitleName()
    {
        return title_name;
    }
    std::string getPublisherName()
    {
        return publisher_name;
    }
    float getPrice()
    {
        return price;
    }
    int getNumberOfCopies()
    {
        return number_of_copies;
    }
    void setNumberOfCopies(int number_of_copies) {
        this->number_of_copies = number_of_copies;
    }

    friend bool operator==(const Book &book_one, const Book &book_two)
    {
        return ((book_one.author_name == book_two.author_name) &&
                (book_one.title_name == book_two.title_name));
    }

    void updateVariables()
    {
        // Requesting user input for above variables
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
};

void printMenu()
{
    std::cout << "\nMENU" << std::endl;
    std::cout << "1. Entry of New Book" << std::endl;
    std::cout << "2. Buy Book" << std::endl;
    std::cout << "3. Search for Book" << std::endl;
    std::cout << "4. Edit Details Of Book" << std::endl;
    std::cout << "5. Exit" << std::endl << std::endl;
    std::cout << "Enter your choice: ";
}

void addBookToArray(Book books[], int books_size, Book book)
{
    for (int i = 0; i < books_size; i++)
    {
        //Checking if the book already exists in the database
        if (books[i] == book)
        {
            std::cout << "Book already exists in database!";
            break;
        }
        // If string variables are empty in object book, then end of array has been reached. Therefore we add book to the end of array.
        else if ((books[i].getAuthorName() == "") && (books[i].getTitleName() == "") && (books[i].getPublisherName() == ""))
        {
            books[i] = book;
            break;
        }
    }
}

void buyBook(Book books[], int books_size) {
    std::string title;
    std::string author;
    int requested_number = 0;

    std::cin.clear();
    std::cin.ignore();
    std::cout << "Enter Title Of Book: ";
    std::getline(std::cin, title);
    std::cin.clear();
    std::cout << "Enter Author Of Book: ";
    std::getline(std::cin, author);
    std::cin.clear();
    std::cout << "Enter Number Of Books to Buy: ";
    std::cin >> requested_number;
    std::cin.clear();

    for (int i = 0; i < books_size; i++) {
        if (books[i].getTitleName() == title && books[i].getAuthorName() == author) {
            if (books[i].getNumberOfCopies() > requested_number) {
                books[i].setNumberOfCopies(books[i].getNumberOfCopies() - requested_number);
                std::cout << "Book bought sucessfully!";
                std::cout << "Amount: " << books[i].getPrice();
                std::cout << "Number of copies left: " << books[i].getNumberOfCopies();
                return;
            } else {
                std::cout << "Not enough copies for purchase!\n";
                std::cout << "Requested Number Of Books to Buy: " << requested_number << std::endl;
                std::cout << "Number Of Books in Stock: " << books[i].getNumberOfCopies() << std::endl;
                return;
            }
        }
    }
    std::cout << "Book does not exist!";
}

void searchForBook(Book books[], int books_size) {
    std::string title;
    std::string author;

    std::cin.clear();
    std::cin.ignore();
    std::cout << "Enter Title Of Book: ";
    std::getline(std::cin, title);
    std::cin.clear();
    std::cout << "Enter Author Of Book: ";
    std::getline(std::cin, author);
    std::cin.clear();

    for (int i = 0; i < books_size; i++) {
        if (books[i].getTitleName() == title && books[i].getAuthorName() == author) {
            std::cout << "Book\n";
            std::cout << "----\n";
            std::cout << "Title: "  << books[i].getTitleName() << std::endl;
            std::cout << "Author: "  << books[i].getAuthorName() << std::endl;
            std::cout << "Number Of Copies: "  << books[i].getNumberOfCopies() << std::endl;
            return;
        }
    }
    std::cout << "Book not found!\n";
}

void run()
{
    int user_selection = 0;
    int number_of_records = 0;

    // User defining how big array will be.
    std::cout << "Enter how many records will be stored: ";
    std::cin >> number_of_records;

    // Array to hold book objects.
    Book books[number_of_records];

    while (user_selection != 5)
    {
        printMenu();
        std::cin.clear();
        std::cin >> user_selection;
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
            
        }
    }
}

int main()
{
    run();
}
