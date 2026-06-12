#include <iostream>
using namespace std;

int main() {
    int size;

    // Get the size of the square from the user
    cout << "Enter the side length of the square: ";
    cin >> size;

    // Outer loop for rows
    for (int i = 1; i <= size; i++) {
        // Inner loop for columns
        for (int j = 1; j <= size; j++) {
            // Print asterisk if the cell is on the boundary
            if (i == 1 || i == size || j == 1 || j == size) {
                cout << "* ";
            } else {
                // Print space for inner hollow area
                cout << "  "; 
            }
        }
        // Move to the next line after completing a row
        cout << "\n";
    }

    return 0;
}
