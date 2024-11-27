#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the value of n ");
	scanf("%d",&n);
	for(j=n;j>0;j--)
	{
		for(i=0;i<j;i++)
		printf("*");
		printf("\n");
	}return 0;
}
