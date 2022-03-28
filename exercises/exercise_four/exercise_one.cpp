#include <iostream>

int main() {

    int array[] = {5,4,3,2,1};
    int size = sizeof(array)/sizeof(array[0]);
    int *array_ptr = array;
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + *array_ptr;
        array_ptr++;
    }

    std::cout << sum;
    
}