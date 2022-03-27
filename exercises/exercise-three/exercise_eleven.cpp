#include <iostream>
#include <string.h>

int checkFrequency(std::string text, char letter);

int main() {
    std::string text = "Hello World";
    char letter_to_check = 'a';
    std::cout << "The number of times " << letter_to_check << " shows up in " << text << " is " << checkFrequency(text, letter_to_check) << " times";
}

int checkFrequency (std::string text, char letter) {
    int counter = 0;
    for (int i = 0; i < sizeof text / sizeof text[0]; i++) {
        if (text[i] == letter) {
            counter++;
        }
    }
    return counter;
}