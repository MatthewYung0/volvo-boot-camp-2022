#include <iostream>

int main() {
    float number_one;
    float number_two;
    char operation;
    std::cout << "Enter the two numbers you would like to calculate: ";
    scanf("%f %f", &number_one, &number_two);
    std::cout << "Choose which operation you would like [+ - * /]: ";
    scanf(" %c", &operation);
    std::cout << "Result: ";

    switch (operation)
    {
    case '+':
        std::cout << number_one + number_two;
        break;
    case '-':
        std::cout << number_one - number_two;
        break;
    case '*':
        std::cout << number_one * number_two;
        break;
    case '/':
        std::cout << number_one / number_two;
        break;
    }
}