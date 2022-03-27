#include <iostream>

void calculateNthTerm(int start, int difference, int term);

int main() {
    calculateNthTerm(1,2,100);
}

void calculateNthTerm (int start, int difference, int term) {
    std::cout << start + (term - 1) * difference;
}