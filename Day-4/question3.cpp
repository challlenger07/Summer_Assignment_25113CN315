#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, originalNum, remainder, numDigits = 0;
    long long totalSum = 0;

    // Request input from the user
    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Step 1: Count the total number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        numDigits++;
    }

    originalNum = num;

    // Step 2: Extract each digit and calculate the sum of powers
    while (originalNum != 0) {
        remainder = originalNum % 10;
        
        // pow() handles the exponentiation, round() ensures integer precision
        totalSum += round(pow(remainder, numDigits));
        
        originalNum /= 10;
    }

    // Step 3: Check if the sum matches the original input
    if (totalSum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
