#include<iostream>
using namespace std;
int fibonacci(int n)
{
    int a=0,b=1,c,i;
    if(n==0)
    {
        cout<<"0"<< endl;
    }
    else if(n==1)
    {
        cout<<"1" << endl;
    }
    else
    for(i=2;i<=n;i++)
    {
        c=a+b;

        a=b;
        b=c;
    }
    cout<<c<<endl;
    return c;
}
    int main()
    {
        int number;
        cout<<"enter the number of term in fibonacci series";
        cin >> number;
        fibonacci(number);
    
        
        return 0;
    }
