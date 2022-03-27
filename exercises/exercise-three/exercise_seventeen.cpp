#include <iostream>

//Unclear taks. E.g. Why is it a int pointer for a return type if we are just swapping arrays?

int *Swap(int a_size, int *a, int b_size, int *b);

int main()
{
    int a[] = {1,2,3,4,5};
    int a_size = sizeof (a) / sizeof (a[0]);

    int b[] = {3,2,1};
    int b_size = sizeof (b) / sizeof (b[0]);

}

int *Swap(int a_size, int *a, int b_size, int *b) {

    int *new_array = new int[a_size];

    return new_array;
}