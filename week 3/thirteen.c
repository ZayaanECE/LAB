#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,len,b,p;
    a=0;
    p=1;
    printf("Enter the number ");
    scanf("%d",&n);
    while (n!=0)
    {
        b=n%2;
        a = a+b*p;
        n=n/2;
        p=p*10;
    }
    printf("%d",a);
    return 0;
}