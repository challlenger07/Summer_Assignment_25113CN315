#include<stdio.h>
int main()
{
    int N , count=0;
    printf("enter any number whose number of digits is to be counted ");
    scanf("%d",&N);
    while(N>0)
    {
        N=N/10;
        count++;
    }
    printf("no of digits is %d",count);
    return 0;

}