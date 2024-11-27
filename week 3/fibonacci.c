#include<stdio.h>
int main()
{int n,i,l,a,f;
printf("Enter the value of n ");
scanf("%d",&n);
l=1;
i=1;
a=0;
f=0;
if(n>2){
while(l<=n-2)
{
	f=a+i;
	a=i;
	i=f;
	l++;
}
printf("%d",f);}
else
{if(n==1)
printf("0");
if(n==2)
printf("1");4
}
return 0;
}
