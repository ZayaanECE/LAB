#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,len;
    char str[100];
    j=-1;
    printf("Enter the string ");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=str[len-i-1])
        j=1;
    }
    if(j!=-1)
    printf("not a palindrome");
    else
    printf("palindrome");
    return 0;
}
