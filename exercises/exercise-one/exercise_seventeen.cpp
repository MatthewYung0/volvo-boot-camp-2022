#include <iostream>

int main() {
    int number = 0;
    std::cout << "Enter a number: ";
    scanf("%d", &number);

    int number_copy = number;
    int number_of_digits = 0;

    while (number_copy != 0) {
        number_copy /= 10;
        number_of_digits++;
    }
    std::cout << number_of_digits;
}