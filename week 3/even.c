#include<stdio.h>
int main()
{int a,i;
printf("Enter number ");
scanf("%d",&a);
i=1;
while(i<=a)
{
if(i%2==0)
{
printf("%d ",i++);
}
else
i++;
}
return 0;
}
