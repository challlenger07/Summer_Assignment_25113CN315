#include<iostream>
using namespace std;
int main()
{
    int pattern,i,j;
cout<<"enter number of rows" << endl;
cin>>pattern;
for(i=pattern;i>=1;i--)
{
    for(j=1;j<=i;j++)
    {
        cout<<"*";
    }
cout<<endl;
}
return 0;
}