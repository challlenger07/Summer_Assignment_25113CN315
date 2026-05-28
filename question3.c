#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter number whose factorial is to be printed");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("value of factorial of number is %d",fact);
    return 0;
}