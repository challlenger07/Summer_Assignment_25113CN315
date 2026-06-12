#include <iostream>
using namespace std;

int main() {
    int rows;
    char ch = 'A';

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // 1. Print leading spaces to center the pyramid
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }

        // 2. Print characters for the current row
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << ch;
        }

        // Move to the next character and next line
        ch++;
        cout << endl;
    }

    return 0;
}
