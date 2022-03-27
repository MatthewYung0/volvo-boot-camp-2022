#include <iostream>

void SwapNumbers(int number_one, int number_two);

int main() {
    int input_one = 0;
    int input_two = 0;
    std::cout << "Enter 2 numbers: ";
    scanf("%d %d", &input_one, &input_two);
    SwapNumbers(input_one, input_two);
}

void SwapNumbers(int number_one, int number_two) {
    std::cout << "\nBefore swap\n";
    std::cout << "-------------\n";
    std::cout << "Number One: " << number_one << std::endl;
    std::cout << "Number Two: " << number_two << std::endl;

    int temporary = number_one;
    number_one = number_two;
    number_two = temporary;

    std::cout << "\nAfter swap\n";
    std::cout << "-------------\n";
    std::cout << "Number One: " << number_one << std::endl;
    std::cout << "Number Two: " << number_two << std::endl;
}