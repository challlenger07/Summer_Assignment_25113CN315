#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop handles the number of rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop handles the columns in each row
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        // Move to the next line after completing a row
        cout << endl;
    }

    return 0;
}
