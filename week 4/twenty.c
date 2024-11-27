#include<stdio.h>
int main()
{
	int i,n,j,k;
	k=1;
	printf("Enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++){
		printf("%d ",k++);}
		printf("\n");
		
	}return 0;
}
