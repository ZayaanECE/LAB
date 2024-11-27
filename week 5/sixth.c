#include<stdio.h>
int main()
{int n,i,j,c,k;
printf("Enter number of values ");
scanf("%d",&n);
int a[n];
for(i=1;i<n+1;i++)
{
	printf("Enter the %d value\n",i);
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
for(j=0;j<n-i;j++)
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
