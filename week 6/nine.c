#include<stdio.h>
int main()
{
    int n,i;
    char str[100];
    printf("Enter the string ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' )
        printf("%c ",str[i]);
    }
    return 0;
}