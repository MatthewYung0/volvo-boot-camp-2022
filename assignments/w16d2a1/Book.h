#pragma once

#include <cstring>
#include <string.h>
#include <vector>
#include <fstream>
#include <iostream>

class Book
{
private:
    std::string author_name;
    std::string title_name;
    std::string publisher_name;
    float price;
    int number_of_copies;

public:
    Book();
    Book(std::string author_name, std::string title_name, std::string publisher_name, float price, int number_of_copies);
    ~Book();
    std::string getAuthorName();
    std::string getTitleName();
    std::string getPublisherName();
    float getPrice();
    int getNumberOfCopies();
    void setAuthorName(std::string author_name);
    void setTitleName(std::string title_name);
    void setPublisherName(std::string publisher_name);
    void setPrice(float price);
    void setNumberOfCopies(int number_of_copies);

    friend bool operator==(const Book &book_one, const Book &book_two);

    void printDetails();

    void updateVariables();
};