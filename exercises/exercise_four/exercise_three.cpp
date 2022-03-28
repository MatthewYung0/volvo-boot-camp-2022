#include <iostream>

int main() {

    int array[10];
    int *array_ptr = array + (sizeof(array)/sizeof(array[0]) -1);

    std::cout << "Enter 10 numbers: \n";

    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = sizeof(array)/sizeof(array[0]); i > 0; i--) {
        std::cout << *array_ptr << " ";
        array_ptr--;
    }

}