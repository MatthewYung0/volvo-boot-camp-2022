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
    void setAuthorName(std::string author_name)
    {
        this->author_name = author_name;
    }
    void setTitleName(std::string title_name)
    {
        this->title_name = title_name;
    }
    void setPublisherName(std::string publisher_name)
    {
        this->publisher_name = publisher_name;
    }
    void setPrice(float price)
    {
        this->price = price;
    }
    void setNumberOfCopies(int number_of_copies)
    {
        this->number_of_copies = number_of_copies;
    }

    friend bool operator==(const Book &book_one, const Book &book_two)
    {
        return ((book_one.author_name == book_two.author_name) &&
                (book_one.title_name == book_two.title_name));
    }

    void updateVariables()
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
};

void printMenu()
{
    std::cout << "\nMENU" << std::endl;
    std::cout << "1. Entry of New Book" << std::endl;
    std::cout << "2. Buy Book" << std::endl;
    std::cout << "3. Search for Book" << std::endl;
    std::cout << "4. Edit Details Of Book" << std::endl;
    std::cout << "5. Exit" << std::endl
              << std::endl;
    std::cout << "Enter your choice: ";
}

void printEditDetailsMenu()
{
    std::cout << "\n1. Title: " << std::endl;
    std::cout << "2. Author: " << std::endl;
    std::cout << "3. Publisher: " << std::endl;
    std::cout << "4. Price: " << std::endl;
    std::cout << "5. Number Of Copies: " << std::endl;
    std::cout << "6. Exit. " << std::endl << std::endl;
    std::cout << "Enter your choice: ";
}

void addBookToArray(Book books[], int books_size, Book book)
{
    for (int i = 0; i < books_size; i++)
    {
        // Checking if the book already exists in the database
        if (books[i] == book)
        {
            std::cout << "\nBook already exists in database!\n";
            break;
        }
        // If string variables are empty in object book, then end of array has been reached. Therefore we add book to the end of array.
        else if ((books[i].getAuthorName() == "") && (books[i].getTitleName() == "") && (books[i].getPublisherName() == ""))
        {
            books[i] = book;
            std::cout << "\nBook added successfully!\n";
            break;
        }
    }
}

// Function to check if book exists in database. Used in serval other functions (e.g. edit book details, find book details)
int existsInArray(Book books[], int books_size)
{
    std::string title;
    std::string author;
    std::cin.clear();
    std::cin.ignore();
    std::cout << "\nEnter Title Of Book: ";
    std::getline(std::cin, title);
    std::cin.clear();
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

void buyBook(Book books[], int books_size)
{
    int index = existsInArray(books, books_size);
    if (index > -1)
    {
        int requested_number = 0;
        std::cin.clear();
        std::cout << "Enter Number Of Books to Buy: ";
        std::cin >> requested_number;
        if (books[index].getNumberOfCopies() > requested_number)
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
    // If book doesn't exist, return error.
    std::cout << "\nBook does not exist!\n";
}

void searchForBook(Book books[], int books_size)
{
    int index = existsInArray(books, books_size);

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

void changeBookDetails(Book books[], int books_size)
{
    int index = existsInArray(books, books_size);

    if (index > -1)
    {
        int user_selection = 0;
        float new_price = 0;
        int number_of_copies = 0;
        std::string string_input = "";

        // Menu for selection which attribute to modify
        while (user_selection != 6)
        {
            std::cout << "\nSelect one of the following options";
            printEditDetailsMenu();
            std::cin.clear();
            std::cin >> user_selection;
            switch (user_selection)
            {
            case 1:
            {
                std::cout << "\nCurrent Title: " << books[index].getTitleName() << std::endl;
                std::cout << "New Title: ";
                std::cin.clear();
                std::cin.ignore();
                std::getline(std::cin, string_input);
                books[index].setTitleName(string_input);
                break;
            }
            case 2:
            {
                std::cout << "\nCurrent Author: " << books[index].getAuthorName() << std::endl;
                std::cout << "New Author: ";
                std::cin.clear();
                std::cin.ignore();
                std::getline(std::cin, string_input);
                books[index].setAuthorName(string_input);
                break;
            }
            case 3:
            {
                std::cout << "\nCurrent Publisher: " << books[index].getPublisherName() << std::endl;
                std::cout << "New Publisher: ";
                std::cin.clear();
                std::cin.ignore();
                std::getline(std::cin, string_input);
                books[index].setPublisherName(string_input);
                break;
            }
            case 4:
            {
                std::cout << "\nCurrent Price: " << books[index].getPrice() << std::endl
                          << "sek";
                std::cout << "New Price: ";
                std::cin.clear();
                std::cin.ignore();
                std::cin >> new_price;
                books[index].setPrice(new_price);
                break;
            }
            case 5:
            {
                std::cout << "\nCurrent Number Of Copies: " << books[index].getNumberOfCopies() << std::endl;
                std::cout << "New Number Of Copies: ";
                std::cin.clear();
                std::cin.ignore();
                std::cin >> number_of_copies;
                books[index].setNumberOfCopies(number_of_copies);
                break;
            }
            }
        }
        return;
    }
    std::cout << "\nBook does not exist!\n";
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
        case 4:
        {
            changeBookDetails(books, number_of_records);
            break;
        }
        }
    }
    delete [] books;
}

int main()
{
    run();
}