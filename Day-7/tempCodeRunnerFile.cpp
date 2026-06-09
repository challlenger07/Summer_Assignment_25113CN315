#include <iostream>
using namespace std;

// Recursive function to reverse a number
int reverseNumber(int n, int rev = 0) {
    // Base case: if the number becomes 0, return the reversed number
    if (n == 0) {
        return rev;
    }
    
    // Extract the last digit, append to the reversed number, and recurse
    rev = (rev * 10) + (n % 10);
    return reverseNumber(n / 10, rev);
}

int main() {
    int num, reversedNum;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    
    reversedNum = reverseNumber(num);
    
    cout << "The reversed number is: " << reversedNum << endl;
    
    return 0;
}
