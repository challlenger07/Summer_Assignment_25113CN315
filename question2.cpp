#include <iostream>
#include <string>

using namespace std;

// Function to convert binary string to decimal
int binaryToDecimal(const string& binaryStr) {
    int decimalValue = 0;
    int base = 1; // Represents 2^0 initially

    // Iterate through the string from right (LSB) to left (MSB)
    for (int i = binaryStr.length() - 1; i >= 0; i--) {
        if (binaryStr[i] == '1') {
            decimalValue += base;
        }
        base *= 2; // Move to the next power of 2
    }

    return decimalValue;
}

int main() {
    string binaryInput;

    cout << "Enter a binary number: ";
    cin >> binaryInput;

    int decimalResult = binaryToDecimal(binaryInput);

    cout << "The decimal equivalent of " << binaryInput << " is " << decimalResult << endl;

    return 0;
}
