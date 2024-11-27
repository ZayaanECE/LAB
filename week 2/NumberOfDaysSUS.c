#include<stdio.h>
int main()
{
	int m,y,d;
	printf("Enter the month \n");
	scanf("%d",&m);
	printf("Enter the year \n");
	scanf("%d",&y);
	if (m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		printf("31");
	} else if (m==4||m==6||m==9||m==11){
		printf("30");
	} else if (m==2 && a%4==0 && a%100!=0 || a%400==0){
		print("29");
	} else {
		print("28")
	}
	return 0;
}
