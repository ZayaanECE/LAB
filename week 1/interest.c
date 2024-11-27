#include<stdio.h>
#include<math.h>
int main()
{
	int p,r,t;
	printf("enter the principal amount, rate and time period");
	scanf("%d %d %d",&p,&r,&t);
	printf("the simple interest is %f",(float)(p*r*t)/100);
	printf("\nthe amount after compound interest anually is %f",p*pow((1+r),t));
	return 0;
	
}
