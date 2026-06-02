#include<stdio.h>
int main()
{
    int num,product=1,temp;
    printf("enter an number whose product is to be printed:");
    scanf("%d",&num);
    while(num!=0)
    {
        temp=num%10;
        product=product*temp;
        num=num/10;
    }
    printf("product of the number is %d",product);
    return 0;
}