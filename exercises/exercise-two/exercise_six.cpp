#include <iostream>

char ConvertToUpperCase(char number);

int main() {
    int input = 0;
    std::cout << "Enter a letter: ";
    scanf("%c", &input);

}

char ConvertToUpperCase(char number) {
    return number % 2 == 0;
}