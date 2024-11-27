#include<stdio.h>

int main() 
{
    int i;
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for(i=0;str[i]!='\0';i++)
    {
      if(str[i]==' ')
      str[i+1]-=32;
      else if(i==0)
      str[i]-=32;
    }
    printf("%s",str);
    return 0;
}