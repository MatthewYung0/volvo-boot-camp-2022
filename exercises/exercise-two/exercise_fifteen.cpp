#include <iostream>

int reverseBinary(int number);

int main() {
    int input;
    std::cout << "Enter a number: ";
    scanf("%d", &input);
    std::cout << reverseBinary(input);
}

int reverseBinary(int number) {
    int reversed_number = 0;
    int digit = 0;
    int multiplier = 10;

    for (int i = 0; i < 7; i++) {
        digit = number % 10;
        reversed_number = ((reversed_number * multiplier) + digit);
        multiplier *= 10;
        number /= 10;
    }
    return reversed_number;
}