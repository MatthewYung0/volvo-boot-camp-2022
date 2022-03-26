#include <iostream>

void CalculateInput(float number_one, float number_two, char operation);
bool CheckOperation(char operation);

int main() {
    float number_one = 0;
    float number_two = 0;
    char operation;
    std::cout << "Enter 2 numbers and the operation: ";
    scanf("%f %f %c", &number_one, &number_two, &operation);
    CalculateInput(number_one, number_two, operation);
}

void CalculateInput(float number_one, float number_two, char operation) {
    if (CheckOperation(operation)) {
        switch(operation) {
            case '*':
            std::cout << number_one * number_two;
            break;
            case '/': 
            std::cout << number_one / number_two;
            break;
            case '+': 
            std::cout << number_one + number_two;
            break;
            case '-': 
            std::cout << number_one - number_two;
            break;
        }
    } else {
        std::cout << "Invalid operation!";
    }
}

bool CheckOperation(char operation) {
    if (operation != '*' && operation != '/' && operation != '+' && operation != '-') {
        return false;
    }
    return true;
}

