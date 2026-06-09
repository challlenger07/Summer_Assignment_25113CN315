#include <iostream>

// Recursive function to calculate factorial
unsigned long long factorial(int n)
{
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // Recursive case: n! = n * (n - 1)!
    return n * factorial(n - 1);
}

int main()
{
    int num;

    std::cout << "Enter a positive integer: ";
    std::cin >> num; // Typo fixed here

    // Check for invalid negative input
    if (num < 0)
    {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    }
    else
    {
        std::cout << "Factorial of " << num << " = " << factorial(num) << std::endl;
    }

    return 0;
}
