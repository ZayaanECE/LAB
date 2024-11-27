#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter he 3 values");
	scanf("%d %d %d",&x,&y,&z);
	if (x==y && x==z)
	{
		printf("the given values are equal");
	}
	else
	{
		printf("the given values are not equal");
	}
	return 0;
}
