#include<stdio.h>
float avg(int a[], int n) 
    {
    int sum=0;
    for(int i=0;i<n;i++) 
    {
        sum+=a[i];
    }
    return (float)sum/n; 
    }
int main()
{
    int n,i,j,sum;
    printf("Enter n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    float average;
    average=avg(a,n);
    printf("The average of the array elements is: %f \n", average);
    return 0;
}