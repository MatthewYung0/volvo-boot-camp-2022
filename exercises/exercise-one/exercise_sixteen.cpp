#include <iostream>

int main() {
    int number = 0;
    std::cout << "Enter a number: ";
    scanf("%d", &number);

    int number_copy = number;
    int digit = 0;
    int reversed_number = 0;

    while (number_copy != 0) {
        digit = number_copy % 10;
        reversed_number = (reversed_number * 10) + digit;
        number_copy /= 10;
    }

    std::cout << reversed_number;

}