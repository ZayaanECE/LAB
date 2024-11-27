#include<stdio.h>
int main()
{
    int n,i,j;
    int s=0;
    printf("Enter n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
        if(a[j]==a[i])
        {
        s=a[j];
        break;
        }
    if (s!=0)
        {
        break;
        }
    }
    }
    if (s!=0)
    printf("the first repeated number is %d",s);
    else
    {
    printf("there is no repeated number");
    }
    return 0;
}
