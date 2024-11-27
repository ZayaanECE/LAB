#include<stdio.h>
int main()
{
	int s,i;
	s=0;
	char str1[100];
	char str2[50];
	printf("enter string1: ");
	scanf("%s",&str1);
	printf("enter string2: ");
	scanf("%s",&str2);
	for(i=0;str1[i]!='\0';i++)
	{
		s++;
	}
	for(i=0;str1[i]!='\0';i++)
	{
		str1[i+s]=str2[i];
	}
	printf("the string is ");
    for(i=0;str1[i]!='\0';i++)
    {
	printf("%c",str1[i]);
    }
	return 0;
}
