#include <iostream>
#include <string.h>

std::string convertToLowerCase(int size, std::string text);

int main() {
    std::string text = "Hello World";
    std::string new_text;
    
    int string_size = text.size();

    new_text = convertToLowerCase(string_size, text);
    std::cout << new_text;
}

std::string convertToLowerCase (int size, std::string text) {
    for (int i = 0; i < (sizeof text / sizeof text[0]); i++) {
        if (text[i] > 64 && text[i] < 91) {
            text[i] = text[i] + 32;
        } else {
            text[i] = text[i];
        }
    }
    return text;
}