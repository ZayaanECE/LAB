#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the value of n ");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		for(i=0;i<j+1;i++)
		printf("*");
		printf("\n");
	}return 0;
}