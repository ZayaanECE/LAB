#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n;k++)
                a[k]=a[k+1];
                n--;
            }
        }
    }
   for(i=0;i<n;i++)
   {
    printf("%d ",a[i]); 
   }
   return 0;

}