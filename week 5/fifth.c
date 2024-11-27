#include<stdio.h>
int main()
{
	int n,i,c,j;
	printf("Enter no. of values ");
	scanf("%d",&n);
	int a[n];
for(i=1;i<n+1;i++)
{
	printf("Enter the %d value\n",i);
	scanf("%d",&a[i-1]);
}
for(i=0;i<n/2;i++)
{
	c=a[i];
	a[i]=a[n-i-1];
	a[n-i-1]=c;
}printf("the sorted array is ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
