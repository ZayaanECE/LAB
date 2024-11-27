#include<stdio.h>
int main()
{
    int n,i,j,sum,c,b;
    int s=0;
    printf("Enter n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
    printf("Enter the sum");
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                c=a[i];
                b=a[j];
                break;
            }

        }
    }
    printf("the sum is obtained from %d and %d",c,b);
    return 0;
}
