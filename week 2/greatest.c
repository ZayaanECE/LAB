#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the 3 values");
	scanf("%d %d %d",&a,&b,&c);
	d=a;
	if (b>a && b>c)
	{
	d=b;
    }
	if (c>a && c>b)
	{
	d=c;
    }   
	printf("the greatest value is %d", d);
	return 0;
}
