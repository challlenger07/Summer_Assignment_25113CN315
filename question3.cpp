#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Total number of rows to print

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; i++) {
        char ch = 'A'; // Reset the starting character to 'A' for each row
        
        // Inner loop for printing characters in each row
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++; // Move to the next alphabet
        }
        
        // Move to the next line after finishing a row
        cout << endl;
    }

    return 0;
}
