#include <iostream>
#include <cmath>
using namespace std;

bool primenumber(int num)
{
    if(num <= 1)
        return false;

    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int start, end;

    cout << "Enter starting point: ";
    cin >> start;

    cout << "Enter ending point: ";
    cin >> end;

    for(int f = start; f <= end; f++)
    {
        if(primenumber(f))
        {
            cout << f << " ";
        }
    }

    return 0;
}