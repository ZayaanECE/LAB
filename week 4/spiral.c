#include<stdio.h>
int main()
{
	int n,i,j,k,p,q,r;
	int a[100][100];
	printf("Enter n");
	scanf("%d",&n);
	k=1;
	for(i=0;i<(n+1)/2;i++)
	{
		for(j=i;j<n-i;j++)
		a[i][j]=k++;
		for(p=i+1;p<n-i;p++)
		a[p][n-i-1]=k++;
		for(q=n-2-i;q>=i;q--)
		a[n-1-i][q]=k++;
		for(r=n-2-i;r>i;r--)
		a[r][i]=k++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>9)
			printf("%d  ",a[i][j]);
			else
			printf("%d   ",a[i][j]);
		}printf("\n");
	}
	return 0;
}
