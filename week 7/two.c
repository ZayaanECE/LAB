#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,k;
    printf("Enter n");
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    printf("Enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=a[0]; 
    for (i = 1; i < n; i++) 
    {
        if (a[i] > k) 
            k = a[i];
    }
    printf("The largest element is: %d", k);
    free(a);
    return 0;
}