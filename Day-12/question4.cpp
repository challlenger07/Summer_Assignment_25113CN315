#include <iostream>
#include <cmath>

// Function to check if a number is a perfect number
bool isPerfectNumber(long long num) {
    // 1 and negative numbers are not perfect numbers
    if (num <= 1) return false;

    long long sum = 1; // 1 is always a proper divisor
    long long sqrtNum = std::sqrt(num);

    for (long long i = 2; i <= sqrtNum; ++i) {
        if (num % i == 0) {
            sum += i;
            
            // If the divisors are different, add the matching pair
            if (i != num / i) {
                sum += num / i;
            }
        }
    }

    // Return true if the sum of divisors equals the original number
    return sum == num;
}

int main() {
    long long number = 28; // 28 is perfect (1 + 2 + 4 + 7 + 14 = 28)

    if (isPerfectNumber(number)) {
        std::cout << number << " is a perfect number." << std::endl;
    } else {
        std::cout << number << " is not a perfect number." << std::endl;
    }

    return 0;
}
