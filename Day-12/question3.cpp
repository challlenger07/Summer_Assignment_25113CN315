#include <iostream>
using namespace std;
// Function to find the n-th Fibonacci number recursively
int getFibonacciRecursive(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    return getFibonacciRecursive(n - 1) + getFibonacciRecursive(n - 2);
}

int main() {
    int n;
    cout<<"enter the number at which fibonacci is to be find" << endl;
    cin >> n;
    cout << "Fibonacci number at position " << n << " is: " << getFibonacciRecursive(n) << std::endl;
    return 0;
}
