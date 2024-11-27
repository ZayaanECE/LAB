#include<stdio.h>
int main()
{
	int i,j;
	j=0;
	char ch;
	printf("Enter input ");
	scanf("%c",&ch);
	for(i=65;i<91;i++)
	{
	if(ch==i)
	{
	printf("It is a letter");
	j++;
	break;
    }
    }
    for(i=97;i<123;i++)
	{
	if(ch==i)
	{
	printf("It is a letter");
	j++;
	break;
    }
    }
	for(i=48;i<58;i++)
	{
	if(ch==i)
	{
	printf("It is a digit");
	j++;
	break;
    }
    }
    if(j==0)
    printf("it is a special character");
    return 0; 
}
