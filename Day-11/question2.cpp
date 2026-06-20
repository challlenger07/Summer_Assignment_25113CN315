#include<iostream>
#include<algorithm>
using namespace std;
int maxo(int num1, int num2)
{
int result;
result=max(num1,num2);
cout <<"the mmaximum of two numbers is " << result << endl;

}


int main()
{
    int result,a,b;
    cout<<"enter the first number" << endl;
    cin>>a;
    cout<<"enter the seconf number" << endl;
    cin >> b;
    maxo(a,b);
    
    return 0;

}
