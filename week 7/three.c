#include<stdio.h>
#include<string.h>
int main()
{
	int l,i;
	char str[100];
	printf("enter string: ");
	scanf("%s",str);
    l=strlen(str);
    char *temp=str+l-1;
    while (temp >= str) 
    {
        printf("%c", *temp);
        temp--; 
    }
    return 0;
}
