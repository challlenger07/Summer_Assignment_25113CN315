#include<iostream>
using namespace std;
int main()
{
  int num ,i,count=0;
  cout<<"enter any nummber" << endl;
    cin >> num;
    if(num<0)
    
        cout<< "number is invalid to be calcuated" << endl;
    
    else 
    {
    
    for(i=2;i<num;i++)
    {
      if (num%i==0)
       count++;
    }
    if(count>2)
    cout<<"number is not prime" << endl;
    else
    cout<<"number is prime";

 }
       return 0;
}
