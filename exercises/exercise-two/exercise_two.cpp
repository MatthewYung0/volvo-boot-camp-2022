#include <iostream>

bool IsCharacter(char input);

int main() {
    char input = 0;
    std::cout << "Enter a character: ";
    scanf("%c", &input);

    if (IsCharacter(input)) {
        std::cout << input << " is in the alphabet!";
    } else {
        std::cout << input << " is NOT in the alphabet!";
    }
}

bool IsCharacter(char input) {
    int character = input;
    if (character <= 90 && character >= 65) {
        return true;
    } else if (character <= 122 && character >= 97) {
        return true;
    } else {
        return false;
    }
    
}