#include<stdio.h>
int main()
{int n,i,j,c,s;
printf("Enter number of values");
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
}
printf("the minm value is %d \n",a[0]);
printf("the maxm value is %d \n",a[n-1]);
s=0;
for(i=0;i<n;i++)
{
	s=s+a[i];
}
printf("the average is %f",(float)s/n);
return 0;
}
