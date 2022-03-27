#include <iostream>

char ConvertToUpperCase(char letter);

int main() {
    char input = 0;
    std::cout << "Enter a letter: ";
    scanf("%c", &input);

    if (input < 123 && input > 96) {
        std::cout << "Uppercase of " << input << " is " << ConvertToUpperCase(input);
    } else {
        std::cout << input << " is not in the alphabet!";
    }
}

char ConvertToUpperCase(char letter) {
    return letter - 32;
}