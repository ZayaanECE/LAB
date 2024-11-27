#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter n");
    scanf("%d",&n);
    int a[n-1];
    printf("Enter array");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    k=0;
    for(i=0;i<n-1;i++)
    {
        k+=a[i];
    }
    j=(n*(n+1)/2)-k;
    printf("%d",j);
    return 0;
}