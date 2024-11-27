#include<stdio.h>
int main()
{
    int n,i,j,k,s,f;
    f=0;
    printf("Enter n ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter sum ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==s)
                {printf("%d %d %d \n",a[i],a[j],a[k]);
                f=1;}
                if(f!=0)
                break;
            }
            if(f!=0)
                break;
        }
        if(f!=0)
                break;
    }
    return 0;
}