#include<iostream>
using namespace std;
int main()
{
    int size,sum=0,average=0,i;
    cout<<"enter the size of an array" << endl;
    cin >> size ;
    int arr[size];
    cout<<"enter elements of array "<<endl;
    for(int i=0;i<size;i++){
    cout <<"elements " << i+1 << ":"<< endl;
    cin >> arr[i];
    sum=sum+arr[i];}
    cout<<"the input elements are" << endl;
    for(int i=0;i<=size;i++)
    {
        cout<< arr[i];
    }
    cout<<"The sum of elements of array are" << endl << sum<<endl;
    average=sum/size;
    cout<<"The average of elements are" << average << endl;
    return 0;
}