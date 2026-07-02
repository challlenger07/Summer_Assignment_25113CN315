#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << "\nThe elements in the array are: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
