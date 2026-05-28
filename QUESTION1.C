#include<stdio.h>
int main()
{
    int n,sum=0,i=0;
    printf("enter any number");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum of any given number is: %d",sum);
    return 0;
}