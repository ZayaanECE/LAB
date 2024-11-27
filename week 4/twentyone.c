#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter no of rows");
	scanf("%d",&n);
	printf("Enter 1st number");
	scanf("%d",&i);
	for(j=0;j<n;j++)
	{
		for(k=0;k<j+1;k++)
		{
			printf("%d ",i);
		}
		i++;
		printf("\n");
	} i--;
	for(j=0;j<n;j++)
	{
		for(k=j;k<n;k++)
		{
			printf("%d ",i);
		}
		i=i-1;
		printf("\n");
	}
	return 0;
}
