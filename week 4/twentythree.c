#include<stdio.h>
int main()
{
	int n,i,j,k;
	i=1;
	printf("Enter n");
	scanf("%d",&n);
	for(k=1;k<=n/2;k++)
	 {
		for(j=1;j<=n+1;j++)
		{
			printf("%d",i);
		}printf("%d\n",++i);
		printf("%d",++i);
		i--;
		for(j=1;j<=n+1;j++)
		{
			printf("%d",i);
		}printf("\n");
		i++;
	}return 0;
}
