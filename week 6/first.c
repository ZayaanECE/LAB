#include<stdio.h>
int main()
{
	int s,i;
	s=0;
	char str[100];
	printf("enter string: ");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		s++;
	}
	printf("the length is %d",s);
	return 0;
}
