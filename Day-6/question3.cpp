#include <iostream>

// Function to count set bits using Brian Kernighan's Algorithm
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1); // Clears the lowest set bit
        count++;         // Increment the tally of set bits
    }
    return count;
}

int main() {
    int num = 29; // Binary representation: 11101
    
    std::cout << "Number of set bits in " << num << " is: " 
              << countSetBits(num) << std::endl;
              
    return 0;
}
