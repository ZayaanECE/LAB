#include<stdio.h>
int main()
{
	float m,g,h,v;
	printf("Enter m,g,h,v ");
	scanf("%f %f %f %f",&m,&g,&h,&v);
	printf("the mech energy is %f",(m*g*h)+(0.5*m*v*v));
}
