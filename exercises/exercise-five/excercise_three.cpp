#include <iostream>

void AddComplexNumbers(float n_one_r, float n_two_r, float n_one_i, float n_two_i);

struct complex_number {
    float real;
    float imaginary;
} array[2], *complex_number_ptr;

int main() {

    complex_number_ptr = array;

    complex_number_ptr -> real = 5;
    complex_number_ptr -> imaginary = 10;

    complex_number_ptr++;

    complex_number_ptr -> real = 50;
    complex_number_ptr -> imaginary = 100;

    AddComplexNumbers(array[0].real, complex_number_ptr->real, array[0].real, complex_number_ptr->imaginary);

}

void AddComplexNumbers(float n_one_r, float n_two_r, float n_one_i, float n_two_i) {
    std::cout << "Real Number: " << n_one_r + n_two_r << std::endl;
    std::cout << "Imaginary Number: " << n_one_i + n_two_i << std::endl;
}