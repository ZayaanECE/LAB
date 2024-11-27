#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n-i;j<=n;j++)
        {
        printf("%c",j+64);
        }printf("\n");
    }return 0;
}