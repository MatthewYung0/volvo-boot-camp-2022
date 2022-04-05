#include <iostream>
#include <cassert>
#include <cstdlib>
#include <cmath>
using namespace std;

void printNumber(int *nptr)
{
    cout << *nptr << endl; // dereferences nptr;
};

void printCharacter(char *cptr)
{
    cout << *cptr << endl; // dereferences nptr;
};

void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *((int *)ptr) << endl; // handle int
        break;
    case 'c':
        cout << *((char *)ptr) << endl; // handle float
        break;
    }
}

int getMin(int numbers[], int size)
{
    int min = numbers[0];
    for (int i = i; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[], int size)
{
    int max = numbers[0];
    for (int i = i; i < size; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}

void getMinAndMax(int numbers[], int size, int *min, int *max)
{
    *min = numbers[0];
    *max = numbers[0];
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > *max)
        {
            *max = numbers[i];
        }
        if (numbers[i] < *min)
        {
            *min = numbers[i];
        }
    }
}

void update(int *a,int *b) {
    
    int sum = *a + *b;
    int difference = *a - *b;
    *a = sum;
    *b = difference;

}

int main()
{

    /*     int num = 5;
        char letter = 'A';
        // printNumber(&num);
        // printCharacter(&letter);
        print(&letter, 'c');
        print(&num, 'i'); */

    // int numbers[5] = {2,3,5,7,9};
    // // cout << numbers << endl; //address of first element in the array.
    // // cout << &numbers[0] << endl; // Same as above. Address of element above at index 0.
    // // cout << numbers[2] << endl; // Prints out the element at index 2.
    // // cout << *(numbers + 2) << endl; // dereferences, and prints out the element at index 2.

    // int min = 0;
    // int max = 1;

    // cout << "Before" << endl;
    // cout << min << endl;
    // cout << max << endl;

    // getMinAndMax(numbers, 5, &min, &max);

    // cout << "After" << endl;;
    // cout << min << endl;
    // cout << max << endl;

    // system("pause>0");

    // int *a = nullptr;
    // assert(a=nullptr);

    char commas;
    

}
