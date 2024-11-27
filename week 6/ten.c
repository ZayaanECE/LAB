#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,len;
    char str[100];
    printf("Enter the string ");
    scanf("%s",str);
    printf("Enter n ");
    scanf("%d",&n);
    len=strlen(str);
    for(i=len;i>=n;i--)
    {
        str[i+1]=str[i];
    }
    char c;
    printf("Enter the character ");
    scanf(" %c",&c);
    str[n]=c;
    str[len+1]='\0';
    printf("%s",str);
    return 0;
}
