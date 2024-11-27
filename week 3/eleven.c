#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,len,i,copy,b,c;
    a=0;
    len=0;
    printf("Enter the number ");
    scanf("%d",&n);
    copy=n;
    c=n;
    while (n!=0)
    {
        len++;
        n=n/10;
    }
    for(i=len;i>0;i--)
    {
        b=copy%10;
        a = a * 10 + b;
        copy=copy/10;
    }
    if(c==a)
    {printf("palindrome");}
    else
    {printf("not palindrome");}
    return 0;
}