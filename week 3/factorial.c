#include<stdio.h>
int main()
{
	int n,i,a;
	printf("Enter value for n ");
	scanf("%d",&n);
	a=1;
	for(i=1;i<=n;i++)
	 a=a*i;
	printf("%d",a);
	return 0;
	
}
