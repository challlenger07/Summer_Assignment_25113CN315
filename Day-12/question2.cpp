#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num)
{
    int original = num;
    int temp = num;
    int digits = 0;
    int sum = 0;

    // Count number of digits
    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum of digits raised to power 'digits'
    while(temp > 0)
    {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(isArmstrong(num))
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not an Armstrong Number";
    }

    return 0;
}