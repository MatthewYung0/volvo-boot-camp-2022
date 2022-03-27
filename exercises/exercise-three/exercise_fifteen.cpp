#include <iostream>
#include <string.h>

std::string addTwoStrings(std::string first_string, std::string second_string);

int main()
{
    std::string first_string = "Hello ";
    std::string second_string = "World";
    std::cout << addTwoStrings(first_string, second_string);
}

std::string addTwoStrings(std::string first_string, std::string second_string) {
    return first_string + second_string;
}