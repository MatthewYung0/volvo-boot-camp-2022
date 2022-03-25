#include <iostream>

int main() {

    int row = 0;

    std::cout << "Enter how many rows of stars to print: ";
    scanf("%d", &row);

    for (int counter = 0; counter <= row ; counter++) {
        for (int space = counter; space < row; space++) {
            std::cout << " ";
        }
        for (int star = (counter + (counter - 1)); star > 0; star--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}