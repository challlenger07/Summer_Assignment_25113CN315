#include <iostream>

// Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    // Base Case: if the remaining number is 0, return 0
    if (n == 0) {
        return 0;
    }
    
    // Recursive Case: extract the last digit and add it to the sum of the remaining digits
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number;
    
    std::cout << "Enter an integer: ";
    std::cin >> number;
    
    // Handle negative numbers by converting them to positive
    int absoluteNumber = std::abs(number);
    
    int result = sumOfDigits(absoluteNumber);
    
    std::cout << "The sum of digits of " << number << " is: " << result << std::endl;
    
    return 0;
}
