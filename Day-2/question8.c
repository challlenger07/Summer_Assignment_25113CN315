#include<stdio.h>
int main()
{
    int num,rev=0,temp,original;
    printf("enter number to be checked");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        temp=num%10;
        rev=rev*10+temp;
        num=num/10;
    }
    if(original==rev)
    {
     printf("entered number is palindrome");
    }
    else
        {
        printf("number is not palindrome");
        }
    return 0;
}