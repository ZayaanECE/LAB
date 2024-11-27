#include<stdio.h>
int main()
{
	int n,i,j,s;
	printf("Enter the value of n ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(s=0;s<n-i;s++)
		printf(" ");
		for(j=0;j<2*i-1;j++)
		printf("*");
		printf("\n");
	}return 0;
}
