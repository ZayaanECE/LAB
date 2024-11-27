#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	printf("Enter the marks of 5 subjects out of 100 each");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	printf("the percentage of the student is %f%%",((a+b+c+d+e)/500)*100);
    return 0;
}
