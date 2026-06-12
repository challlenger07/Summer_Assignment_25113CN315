#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        
        // 1. Inner loop to print leading spaces for alignment
        for (int space = 1; space <= rows - i; space++) {
            cout << "  "; // Double space to account for character spacing
        }

        // 2. Inner loop to print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // 3. Inner loop to print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }

        // Move to the next line after completing a row
        cout << endl;
    }

    return 0;
}
