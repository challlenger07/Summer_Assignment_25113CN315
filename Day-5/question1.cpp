#include<iostream>
#include<cmath>
using namespace std;
  int main()
  {
    int n,sum=0,i;
    cout<<"enter any number you want to check" << endl;
    cin >> n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        sum=sum+i;
        }
    }
    if(sum==n)
    {
        cout<<"given number is perfect number" << endl;
    }
    else
    {
        cout<<"given number is not perfect" << endl;
    }
    return 0;
  }