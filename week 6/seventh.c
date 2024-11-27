#include<stdio.h>
#include<string.h>
int main()
{
	int s,i;
	char a;
	s=0;
	char str1[100];
	char str2[50];
	printf("enter string1: ");
	scanf("%s",&str1);
	printf("enter string2: ");
	scanf("%s",&str2);
	if(strcmp(str1,str2)!=0)
	printf("not equal");
	else
	printf("equal");
	return 0;
}
