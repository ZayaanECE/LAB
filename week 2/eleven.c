#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter day");
	scanf("%d",&d);
	printf("Enter month");
	scanf("%d",&m);
	printf("Enter year");
	scanf("%d",&y);
	
	if((y%4==0 && y%100!=0)||y%400==0)
	{
	if(m==2 && d==28)
	printf("%d %d %d",++d,m,y);
	else if(m==2 && d==29)
	printf("%d %d %d",1,++m,y);
    }
    
	else if(m==12 && d==31)
	printf("%d %d %d",1,1,++y);
	
	else if(m==2 && d==28)
	printf("%d %d %d",1,++m,y);
	
	else if(d==30 && m==4 || m==6|| m==9 || m==11 )
	printf("%d %d %d",1,++m,y);
	
	else if(d==31 && m==1 || m==3|| m==5 || m==7 || m==8 || m==10 || m==12 )
	printf("%d %d %d",1,++m,y);
	
	else
	printf("%d %d %d",++d,m,y);
	
	return 0;
	
}
