#include <iostream>

int countHoles(int number);

int main() {
    int input = 0;
    std::cout << "Enter a number: ";
    scanf("%d", &input);
    std::cout << "There are " << countHoles(input) << " holes in the number " << input;
}

int countHoles(int number) {
    int digit;
    int number_of_holes = 0;

    while (number != 0) {
        digit = number % 10;
        if (digit == 0 || digit == 4 || digit == 6 || digit == 9) {
            number_of_holes++;
        } else if (digit == 8) {
            number_of_holes += 2;
        }
        number /= 10;
    }

    return number_of_holes;
}