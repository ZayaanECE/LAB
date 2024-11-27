#include<stdio.h>
int main()
{int n,l;
printf("Enter the number ");
scanf("%d",&n);
l=0;
while(n!=0)
{
	n=n/10;
	l++;
}printf("%d",l);
return 0;
}
