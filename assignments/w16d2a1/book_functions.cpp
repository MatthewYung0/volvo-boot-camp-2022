#include "book_functions.h"

void printMenu()
{
    std::cout << "\nMENU" << std::endl;
    std::cout << "1. Entry of New Book" << std::endl;
    std::cout << "2. Buy Book" << std::endl;
    std::cout << "3. Search for Book" << std::endl;
    std::cout << "4. Edit Details Of Book" << std::endl;
    std::cout << "5. Print out details of all books" << std::endl;
    std::cout << "6. Export details to book list" << std::endl;
    std::cout << "0. Exit" << std::endl << std::endl;
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
void addBookToArray(std::vector<Book>& books, int books_size, Book book)
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
int existsInVector(std::vector<Book>& books, int books_size)
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
void buyBook(std::vector<Book>& books, int books_size)
{
    int index = existsInVector(books, books_size);
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
void searchForBook(std::vector<Book>& books, int books_size)
{
    int index = existsInVector(books, books_size);

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
void changeBookDetails(std::vector<Book>& books, int books_size)
{
    int index = existsInVector(books, books_size);

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
void importBookList(std::vector<Book>& books) {

    //Opening text file containing book details
    std::ifstream myfile;
    myfile.open("book_list");
    std::string text = " ";

    //Getting number of lines in text file
    int lines = 0;
    while(getline(myfile, text)) {
        if (text != " ") {
            ++lines;
            continue;
        }
    }

    //Returning to the top of the text file
    myfile.clear();
    myfile.seekg(0);

    //Declaring dynamic array
    std::string *temp = new std::string[lines];

    //Add data to dynamic array
    for (int i = 0; getline(myfile, text); i++) {
        if (text != "") {
            temp[i] = text;
        }
    }

    //Create Book object from dynamic array
    for (int i = 0; i < lines; i += 6) {
        Book new_book;

        std::string title = temp[i];
        new_book.setTitleName(temp[i]);

        std::string author = temp[i+1];
        new_book.setAuthorName(temp[i+1]);

        std::string publisher = temp[i+2];
        new_book.setPublisherName(temp[i+2]);

        float price = stof(temp[i+3]);
        new_book.setPrice(price);

        int copies = stof(temp[i+4]);
        new_book.setNumberOfCopies(std::stof(temp[i+4]));
        books.push_back(new_book);
    }
    myfile.close();
    delete[] temp;
}
void exportBookList(std::vector<Book>& books) {
    std::ofstream myfile;
    myfile.open("book_list");

    // Iterating through each book in books, and writing to book_list.
    for (Book book: books) {
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
void printAllBooks(std::vector<Book>& books) {
    for (Book book : books) {
        book.printDetails();
    }
}
void run()
{
    int user_selection = -1;
    int number_of_records = 0;

    // Array to hold book objects.
    std::vector<Book> books;
    // Importing book list from text file.
    importBookList(books);

    while (user_selection != 0)
    {
        number_of_records = books.size();
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
        }
    }
    books.clear();
}