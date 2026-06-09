#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop controls the number of rows
    for(int i = 1; i <= rows; ++i) {
        // Inner loop prints stars equal to the current row number
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        // Move to the next line after completing a row
        cout << "\n";
    }

    return 0;
}
