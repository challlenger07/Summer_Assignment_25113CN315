#include<iostream>
using namespace std;
bool ispalindrome(int number)
{
    int reverse=0,original,digit;
    number=original; //storing the original value inside the "original"
    while(number>0){
    digit=number%10; //for extracting last digit of number
    reverse=reverse*10+digit;//for printng the reverse of the original number
    number=number/10;//for removing the last digit of number
    }
    return original==reverse;//True or False return it it to the main function

}
int main()
{
    int num;
    cout<<"enter a number" <<endl;
    cin >> num ;
    if(ispalindrome(num))
    {
        cout<<"number is palindrome" << endl;

    }
    else
    {
        cout<<"number is not palindrome" << endl;
    }
return 0;
}