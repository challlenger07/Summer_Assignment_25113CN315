#include<iostream>
using namespace std;
bool isprime(int num)
{
    int i=1,count=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        count++;
        
    }
    if(count>2)
    {
        cout<<"number is not prime" << endl;
        return 1;
    }
    else
    {
        cout<<"number is prime" << endl;
        return 0;
    }
}



int main()
{
    int number;
    cout<<"enter number you want to check" << endl;
    cin >> number;
    isprime(number);
    return 0;
}
