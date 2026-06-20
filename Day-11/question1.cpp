#include<iostream>
using namespace std;
int add(int a,int b)
{
    int c;
    c=a+b;
    cout<<c<<endl;
    return 0;
}
int main()
{
int val1,val2;
cout<<"enter first term " <<endl;
cout<<" enter second term" <<endl;
cin >> val1 >> val2;
cout<<"sum of both the digits is" << endl;
add(val1,val2);
return 0;
}