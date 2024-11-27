#include<stdio.h>
int main()
{
	int i,j,n,k,c;
	printf("Enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		{
		printf(" ");
	    }
	    for(k=0;k<i;k++)
	    {
	    printf("%d ",i);
	    }
	    printf("\n");
	} return 0;
}
