#include <iostream>
#include <string.h>

std::string reverseString(std::string text);

int main()
{
    std::string text = "Hello World";
    std::cout << reverseString(text);
}

std::string reverseString(std::string text)
{
    std::string new_string = "";
    int index = 0;
    int pos_text = text.size();

    while (index <= text.size()) {
        new_string = new_string + text[pos_text];
        pos_text--;
        index++;
    }
    return new_string;
}