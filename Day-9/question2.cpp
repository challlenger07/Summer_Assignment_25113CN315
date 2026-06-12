#include<iostream>
using namespace std;
int main()
{
int rows,columns,i,j;
cout<<"enter number of rows" << endl;
cin>>rows;
for(i=rows;i>=1;i--)
{
    for(j=1;j<=i;j++)
    {
        cout<<j;
    }
    cout<<endl;
}
return 0;
}