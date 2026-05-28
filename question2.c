#include<stdio.h>
int main()
{
    int N,table,i=1;
    printf("enter digit whose table is to be printed:");
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
    table=N*i;
    printf("%d",table)  ;

    }
    return 0;
}