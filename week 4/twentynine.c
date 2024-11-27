#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n+1;j++)
        {
            printf(" ");
        }
        if (i%2!=0)
        {
            for(j=0;j<i;j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j=0;j<i;j++)
            {
                printf("-");
            }
        }printf("\n");
    }
    for(i=1;i<n;i++)
    {
        for(j=n-i-1;j<=n;j++)
        {
            printf(" ");
        }
        if (i%2==0)
        {
            for(j=i;j<n;j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j=i;j<n;j++)
            {
                printf("-");
            }
        }printf("\n");
    }
    return 0;
}