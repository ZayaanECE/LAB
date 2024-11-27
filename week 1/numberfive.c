#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values to be swapped");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the swapped values are %d and %d",a,b);
	return 0;
}
