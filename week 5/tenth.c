#include<stdio.h>
int main()
{int i,n,j;
printf("Enter number of values ");
scanf("%d",&n);
int a[n];
for(i=1;i<n+1;i++)
{
	printf("Enter the %d value\n",i);
	scanf("%d",&a[i-1]);
}for(i=0;i<n;i++){
for(j=i+1;j<n;j++)
if(a[i]==a[j])
printf("%d ",a[i]);}
printf("have duplicated values");
return 0;}

