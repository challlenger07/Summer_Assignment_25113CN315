#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop for the number of rows
    for(int i = 1; i <= rows; ++i) {
        
        // Inner loop 1: Prints the leading spaces
        for(int space = 1; space <= rows - i; ++space) {
            cout << " ";
        }

        // Inner loop 2: Prints the stars
        for(int j = 1; j <= (2 * i - 1); ++j) {
            cout << "*";
        }

        // Move to the next line after completing a row
        cout << endl;
    }

    return 0;
}
