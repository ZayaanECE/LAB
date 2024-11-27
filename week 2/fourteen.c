#include<stdio.h>
int main()
{
	char ch;
	int i;
	printf("Enter the alphabet ");
	scanf("%c",&ch);
	for(i=65;i<91;i++)
	{
	if(ch==i)
	{
	printf("It is an uppercase letter");
	break;
    }
    }
    for(i=97;i<123;i++)
	{
	if(ch==i)
	{
	printf("It is a lowercase letter");
	break;
    }
    }
	return 0;
}
