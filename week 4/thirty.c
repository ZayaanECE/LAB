#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter n ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        printf("*");
        for(j=0;j<=2*n-2*i-2;j++)
        {
            printf("_");
        }
        printf("*\n");


    }
    for(i=1;i<n+1;i++)
    {
    printf(" ");
    }
    printf("*");
    return 0;
}