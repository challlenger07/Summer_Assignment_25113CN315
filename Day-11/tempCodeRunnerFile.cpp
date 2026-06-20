#include<iostream>
using namespace std;
int fact(int number)
{
int result=1,i=1 ;
for(i=1;i<=number;i++)
result=i*1*result;
cout <<"the factorial of number is" << result << endl;
return 0;
}
int main()
{
    int a;
    cout<< "enter the number whose factorial has to be find" << endl;
    cin >> a ;
    fact(a);
    return 0;
}