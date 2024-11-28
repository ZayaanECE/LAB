#include<stdio.h>
int main()
{int n,i,j,c,k;
printf("Enter number of values ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
	printf("Enter the %d value\n",i+1);
	scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
for(j=0;j<n-i-1;j++)
if(a[j]>a[j+1])
{
	c=a[j];
	a[j]=a[j+1];
	a[j+1]=c;
}printf("Enter the k value ");
scanf("%d",&k);
printf("the kth smallest is %d \n",a[k-1]);
printf("the kth largest is %d ",a[n-k]);
return 0;}
