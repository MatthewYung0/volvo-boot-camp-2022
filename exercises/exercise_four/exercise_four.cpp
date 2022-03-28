#include <iostream>

int main() {

    int array[] = {5,4,3,2,4,10,40};
    int *array_ptr = array;
    int smallest_number = array[0];

    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        if (*array_ptr < smallest_number) {
            smallest_number = *array_ptr;
        }
        array_ptr++;
    }
    std::cout << smallest_number;
}