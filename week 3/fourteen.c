#include<stdio.h>
#include<math.h>
int main()
{
    int n,copy,len,i,a,b,p;
    printf("Enter the number ");
    scanf("%d",&n);
    copy=n;
    len=0;
    b=0;
    p=0;
    while (n!=0)
    {
        len++;
        n=n/10;
    }
    for(i=0;i<len;i++)
    {
      a=copy%10;
      b=b+a*pow(2,p);
      p++;
      copy=copy/10;
    }    
    printf("%d",b);
    return 0;
}