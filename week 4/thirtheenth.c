#include<stdio.h>
int main()
{
	int n,i,j,s,k;
	printf("Enter the  value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("*");
		for(s=0;s<2*n-2*i-2;s++)
		printf(" ");
		for(k=0;k<i+1;k++)
		printf("*");
		printf("\n");
	}
	for(i=n;i>0;i--)
	{
		for(j=i;j>0;j--)
		printf("*");
		for(s=0;s<2*n-2*i;s++)
		printf(" ");
		for(k=i;k>0;k--)
		printf("*");
		printf("\n");
	}
	
	return 0;
}
