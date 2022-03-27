#include <iostream>

int fibonacci_loop(int n);
int fibonacci_recursion(int n);

int main() {
    int n = 5;
    std::cout << "With Loop\n";
    std::cout << fibonacci_loop(n) << " ";
    std::cout << "\nWith Recursion\n";
    std::cout << fibonacci_recursion(n) << " ";
}

int fibonacci_loop (int n) {
    int n1 = 0;
    int n2 = 1;
    int n3 = 0;
    for (int i = 2; i < n + 1; i++) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return n3;
}

int fibonacci_recursion (int n) {
    if (n == 1 || n == 0) {
        return n;
    } else {
        return (fibonacci_recursion(n-1) + fibonacci_recursion(n-2));
    }
}