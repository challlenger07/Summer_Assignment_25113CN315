#include<iostream>
using namespace std;
int main()
{
    int factors,num,i;
    cout<<"enter number whose factors is to be printed:" << endl;
    cin>>num;
    cout<<"factors are" << endl;
    for(i=1;i<=num;i++)
    {
    if(num%i==0)
    {
        cout<<i<<endl;
    }
}
return 0;
}