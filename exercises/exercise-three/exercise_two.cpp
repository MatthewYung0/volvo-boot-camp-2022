#include <iostream>
#include <string>

bool checkForDuplicates(std::string &text, int string_size);

int main() {
    std::string text = "abcdefghijkl";
    int string_size = text.length();
    if (checkForDuplicates(text, string_size)) {
        std::cout << "The string has NO repeated characters!";
    } else {
        std::cout << "The string HAS repeated characters!";
    }
}

bool checkForDuplicates(std::string &text, int string_size) {
    int sum = 0;
    for (int i = 0; i < string_size; i++) {
        for (int j = i + 1; j < string_size; j++) {
            if (text[i] == text[j]) {
                return false;
            }
        }
    }
    return true;
}