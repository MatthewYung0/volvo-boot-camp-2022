#include <iostream>

void swapPointers(int *ptr_one, int *ptr_two) {
    int *temporary;
    *temporary = *ptr_one;
    *ptr_one = *ptr_two;
    *ptr_two = *ptr_one;
}