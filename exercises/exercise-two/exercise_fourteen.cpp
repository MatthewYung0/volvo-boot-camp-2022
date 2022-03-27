#include <iostream>

int printFibonacciSequnce(int number);

int main() {
    int input = 0;
    int fibNumber = 0;
    std::cout << "Enter a number: ";
    scanf("%d", &input);
    std::cout << printFibonacciSequnce(input);
}

int printFibonacciSequnce(int number) {
    if (number <= 1) {
        return number;
    }
    return printFibonacciSequnce(number - 1) + printFibonacciSequnce(number - 2);
}