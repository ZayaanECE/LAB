#include<stdio.h>
#include<math.h>
int main()
{
	float u,a,t,b,c,p;
	printf("enter the values of u,a,t,b,c,p");
	scanf("%f %f %f %f %f %f",&u,&a,&t,&b,&c,&p);
	printf("\nthe value of v is %f",u+(a*t));
	printf("\nthe value of s is %f",(u*t)+(0.5*a*pow(t,2)));
	printf("\nthe value of t is %f",(2*a)+sqrt(b)+(9*c));
	printf("\nthe value of h is %f",sqrt(pow(b,2)+pow(p,2)));
	return 0;
	
}
