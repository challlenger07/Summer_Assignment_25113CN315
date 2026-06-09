#include<iostream>
using namespace std;
int main()
{
    int num;
    int binary[32];
    int i=0;
    int j;
    cout<<"enter any decimal number" << endl;
    cin >> num;
    if(num==0)
    {
        cout<<"binary=0"<< endl;
        return 0;
    }
    while(num>0){
        binary[i]=num%2;
        num=num/2;
        i++;
    }
    
    for(j=i-1;j>=0;j--)
    {
        cout <<binary[j];
    }
    return 0;


}