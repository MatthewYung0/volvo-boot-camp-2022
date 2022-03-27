#include <iostream>
#include <string.h>

std::string keepAlphabetLetters(std::string text);

int main()
{
    std::string text = "Hello#World";
    std::string new_text = keepAlphabetLetters(text);
    std::cout << new_text;
}

std::string keepAlphabetLetters(std::string text)
{
    std::string new_string = "";

    for (int i = 0; i < text.size(); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) {
            new_string = new_string + text[i];
        }
    }
    text = new_string;
    return text;
}