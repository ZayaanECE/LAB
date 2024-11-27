#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter the sides of the triangle");
	scanf("%d %d %d",&x,&y,&z);
	if (x==y && x==z)
	{
		printf("it is an equilateral triangle");
	}
	else if(x==y || y==z || x==z)
	{
		printf("it is an isosceles triangle");
	}
	else if(x!=y && y!=z && x!=z)
	{
		printf("it is a scalene triangle");
	}
	return 0;
}
