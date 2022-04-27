#include "importBookList.h"

void importBookList(std::vector<Book> &books)
{

    // Opening text file containing book details
    std::ifstream myfile;
    myfile.open("book_list");
    std::string text = " ";

    // Getting number of lines in text file
    int lines = 0;
    while (getline(myfile, text))
    {
        if (text != " ")
        {
            ++lines;
            continue;
        }
    }

    // Returning to the top of the text file
    myfile.clear();
    myfile.seekg(0);

    // Declaring dynamic array
    std::string *temp = new std::string[lines];

    // Add data to dynamic array
    for (int i = 0; getline(myfile, text); i++)
    {
        if (text != "")
        {
            temp[i] = text;
        }
    }

    // Create Book object from dynamic array
    for (int i = 0; i < lines; i += 6)
    {
        Book new_book;

        std::string title = temp[i];
        new_book.setTitleName(temp[i]);

        std::string author = temp[i + 1];
        new_book.setAuthorName(temp[i + 1]);

        std::string publisher = temp[i + 2];
        new_book.setPublisherName(temp[i + 2]);

        float price = stof(temp[i + 3]);
        new_book.setPrice(price);

        int copies = stof(temp[i + 4]);
        new_book.setNumberOfCopies(std::stof(temp[i + 4]));
        books.push_back(new_book);
    }
    myfile.close();
    delete[] temp;
}