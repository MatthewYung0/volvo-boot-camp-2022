#include <iostream>

int calculateSum(float number_one, float number_two);

int main() {
    float input_one = 0;
    float input_two = 0;
    std::cout << "Enter 2 numbers: ";
    scanf("%f %f", &input_one, &input_two);
    std::cout << calculateSum(input_one, input_two);
}

int calculateSum(float number_one, float number_two) {
    return number_one + number_two;
}