#include <iostream>

void IsPositive(int number);

int main() {
    int input = 0;
    std::cout << "Enter a number: ";
    scanf("%d", &input);
    IsPositive(input);
}

void IsPositive(int number) {
    if (number < 0) {
        std::cout << number << " is a negative number!";
    } else if (number > 0) {
        std::cout << number << " is a positve number!";
    } else {
        std::cout << number << " is neither a negative or positive number!";
    }
}