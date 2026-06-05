#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,n,i;
    cout<<"enter the number till which series has to be printed" << endl;
    cin >> n;
    if(n==0)
    {
        cout<<"0"<< endl;
    }
    else if(n==1)
    {
        cout<<"1" << endl;
    }
    else
    for(i=1;i<=n;i++)
    {
        c=a+b;
        cout<< a<< endl;
        a=b;
        b=c;
    }  
    return 0;
}