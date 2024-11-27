#include<stdio.h>
int main()
{
	int i;
	char str[100];
	char str1[100];
	printf("enter string: ");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		str1[i]=str[i];
	}
    printf("the copied string is ");
    for(i=0;str1[i]!='\0';i++)
    {
	printf("%c",str1[i]);
    }
	return 0;
}
