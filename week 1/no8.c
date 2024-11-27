#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value in km to convert to m and the value in cm to convert to mm");
	scanf("%d %d",&a,&b);
	printf("the value in m is %d",a*1000);
	printf("\nthe value in mm is %d",b*10);
	return 0;
}
