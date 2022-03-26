#include <iostream>

int PrintCubic(int base, int length, int height);

int main() {
    int base = 0;
    int length = 0;
    int height = 0;

    std::cout << "Enter the base, length, and height: ";
    scanf("%d %d %d", &base, &length, &height);
    std::cout << PrintCubic(base, length, height);
}

int PrintCubic(int base, int length, int height) {
    return (base * length * height);
}