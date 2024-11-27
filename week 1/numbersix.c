#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the values to be swapped");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the swapped values are %d and %d",a,b);
	return 0;
}
