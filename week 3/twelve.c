#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,len,i,copy,b;
    a=0;
    len=0;
    printf("Enter the number ");
    scanf("%d",&n);
    copy=n;
    while (n!=0)
    {
        len++;
        n=n/10;
    }
    for(i=len;i>0;i--)
    {
        b=copy%10;
        a = a+b;
        copy=copy/10;
    }
    printf("%d",a);
    return 0;
}