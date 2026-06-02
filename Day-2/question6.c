#include<stdio.h>
int main()
{
    int num,rev=0,temp;
    printf("enter an number whose reverse is to be printed");
    scanf("%d",&num);
    while(num!=0)
    {
        temp=num%10;
        rev=rev*10+temp;
        num=num/10;
    }
    printf("the reverse of an number is %d",rev);
    return 0;

}