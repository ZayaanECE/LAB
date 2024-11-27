#include<stdio.h>
int main()
{
	int s,i;
	s=0;
	char str1[100];
	char str2[100];
	printf("enter string1: ");
	scanf("%s",&str1);
	for(i=0;str1[i]!='\0';i++)
	{
		s++;
	}
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[s-i-1];
	}
	printf("the reversed string is ");
    for(i=0;str2[i]!='\0';i++)
    {
	printf("%c",str2[i]);
    }
	return 0;
}
