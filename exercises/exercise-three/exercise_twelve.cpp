#include <iostream>
#include <string.h>

int checkLength(std::string text);

int main() {
    std::string text = "Hello World";
    std::cout << "The length of " << text << " is " << checkLength(text);
}

int checkLength (std::string text) {
    int counter = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        counter++;
    }
    return counter;
}