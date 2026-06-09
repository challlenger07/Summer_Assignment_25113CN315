#include <iostream>
#include <iomanip>

// Function to calculate x^n using Binary Exponentiation
double calculatePower(double x, long long n) {
    // Handle the base case where exponent is 0
    if (n == 0) {
        return 1.0;
    }

    // Handle negative exponents: x^(-n) = (1/x)^n
    if (n < 0) {
        x = 1.0 / x;
        n = -n; // Convert to positive exponent
    }

    double result = 1.0;
    double current_product = x;

    // Iterative Exponentiation by Squaring
    while (n > 0) {
        // If n is odd, multiply the current product into the result
        if (n % 2 == 1) {
            result *= current_product;
        }
        // Square the current product and halve the exponent
        current_product *= current_product;
        n /= 2;
    }

    return result;
}

int main() {
    double x;
    long long n;

    std::cout << "Enter base (x): ";
    std::cin >> x;
    std::cout << "Enter exponent (n): ";
    std::cin >> n;

    // Output the result with 6 decimal places for clarity
    std::cout << std::fixed << std::setprecision(6);
    std::cout << x << "^" << n << " = " << calculatePower(x, n) << std::endl;

    return 0;
}
