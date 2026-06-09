#include <iostream>

// Recursive function to find the n-th Fibonacci number
int fibonacci(int n) {
    // Base Case: F(0) = 0, F(1) = 1
    if (n <= 1) {
        return n;
    }
    // Recursive Case: F(n) = F(n-1) + F(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;

    std::cout << "Enter the number of terms for the Fibonacci series: ";
    std::clog << "Reading terms count from user...\n";
    std::cin >> terms;

    if (terms <= 0) {
        std::cout << "Please enter a positive integer greater than 0." << std::endl;
        return 1;
    }

    std::cout << "Fibonacci Series up to " << terms << " terms: \n";
    for (int i = 0; i < terms; ++i) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
