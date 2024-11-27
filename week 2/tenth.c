#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter the year");
	scanf("%d",&a);
    printf("Enter Month");
    scanf("%d",&b);
	if ((b==2 && a%4==0 && a%100!=0) || a%400==0)
	{
		printf("29");
	}
	else 
	{
	   if(b==4 || b==6 || b==9 || b==11)
       {
        printf("30");
       }
       else if(b==2)
       {
        printf("28");
       }
       else
       {
        printf("31");
       }

	}
	return 0;
}