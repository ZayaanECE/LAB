#include<stdio.h>
int main()
{int n,i,j,c,k,s;
printf("Enter number of values ");
scanf("%d",&n);
int a[n];
for(i=1;i<n+1;i++)
{
	printf("Enter the %d value\n",i);
	scanf("%d",&a[i-1]);
}s=0;
printf("Enter the k value ");
scanf("%d",&k);
for(i=0;i<n;i++)
if(a[i]==k)
{s=s+1;}
printf("the no. of occurances is %d",s);
return 0;}
