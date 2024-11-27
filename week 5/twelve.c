#include<stdio.h>
int main()
{
    int n,i,j;
    int s=0;
    printf("Enter n ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for (i = 0; i < n; i++)
   {
        for (j = 0; j < n; j++) 
        {
            if (i != j && a[i] == a[j]) 
            {
                break;
            }
        }
        if (j == n) 
        { 
            s = a[i];
            break;
        }
    }
    printf("the first non repeated number is %d",s);
    return 0;
}