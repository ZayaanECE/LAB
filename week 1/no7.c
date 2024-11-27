#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	int c;
	printf("enter the values to be multiplied");
	scanf("%f %f",&a,&b);
	printf("\n the product in float is %f",a*b);
	c=a*b;
	printf("\n the product as an integer is %d",c);
	return 0;
}
