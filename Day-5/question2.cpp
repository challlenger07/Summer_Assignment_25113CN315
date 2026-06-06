#include<iostream>
using namespace std;
int factorial(int num)
{
    int f,fact=1;
    for(f=1;f<=num;f++)
    {
        fact=f*fact;
    }
    return fact;
}
int main()
{
    int n,sum=0,i,original,digit,fact;
    cout<<"enter number user want to be checked:"<< endl;
    cin >> n;
    original=n;
    while(n>0)
    {
        digit=n%10;
        n=n/10;
       fact=factorial(digit);
        sum+=fact;
    }
if(sum==original)
{
    cout<< "number is strong number"<<endl;

}
else
{
    cout<<"number is not a strong number" << endl;
}
return 0;
}