#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter n");
	scanf("%d",&n);
	i=1;
	printf("%d\n",i++);
	for(j=0;j<n-1;j++)
	{
		for(k=0;k<j+1;k++)
		{
			printf("%d*",i);
		}printf("%d",i);
		i++;
		printf("\n");
	} i--;
	for(j=0;j<n-1;j++)
	{
		for(k=j;k<n-1;k++)
		{
			printf("%d*",i);
		}printf("%d",i);
		i=i-1;
		printf("\n");
	}printf("%d",i);
	return 0;
}
