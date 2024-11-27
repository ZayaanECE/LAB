#include<stdio.h>
int main()
{
	int i;
	char str[100];
	printf("enter string: ");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		str[i]+=32;
	}
	printf("the string is ");
    for(i=0;str[i]!='\0';i++)
    {
	printf("%c",str[i]);
    }
	return 0;
}
