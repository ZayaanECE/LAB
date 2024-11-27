#include<stdio.h>
int main()
{
	int s,i;
	char a;
	s=0;
	char str[100];
	printf("enter string: ");
	scanf("%s",&str);
	printf("enter character: ");
	scanf("%s",&a);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==a)
		{
			s=i;
			break;
		}
	}
	printf("the first occurance is %d",s);
	return 0;
}
	
