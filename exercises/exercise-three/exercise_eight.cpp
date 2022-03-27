#include <iostream>

void calculateNthTerm(int start, int difference, int term);

int main() {
    int start = 1;
    calculateNthTerm(start,3,10);
}

void calculateNthTerm (int start, int difference, int term) {
    int counter = 0;
    int n = 0;
    while (counter < term) {
        n = start * difference;
        start = n;
        counter++;
    }
    std::cout << n;
}