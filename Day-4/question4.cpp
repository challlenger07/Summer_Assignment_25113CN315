#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int originalNum = num;
    int digitCount = 0;
    int sum = 0;

    // Step 1: Count the total number of digits
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digitCount++;
    }

    // Step 2: Calculate the sum of power of individual digits
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        // round() handles potential floating-point precision issues with pow()
        sum += round(pow(digit, digitCount)); 
        temp /= 10;
    }

    // Step 3: Return true if the sum matches the original number
    return (sum == originalNum);
}

int main() {
    int start, end;

    // Get range boundaries from the user
    cout << "Enter the starting number of the range: ";
    cin >> start;
    cout << "Enter the ending number of the range: ";
    cin >> end;

    // Automatically swap limits if the user enters them in reverse order
    if (start > end) {
        swap(start, end);
    }

    cout << "\nArmstrong numbers between " << start << " and " << end << " are:\n";
    
    bool found = false;
    // Iterate through the given range
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None found in this range.";
    }

    cout << endl;
    return 0;
}
