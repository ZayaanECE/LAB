#include<stdio.h>
int main()
{
    int n,i,j,k;
    k=-1;
    char str[100];
    int b[27] = {0};
    printf("Enter the string ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        b[str[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {if(b[i]!=0)
        {if(b[i]!=i+1)
        k=1;}
    }
    if(k!=-1)
    printf("no");
    else
    printf("yes");
    return 0;


}
