#include<stdio.h>
int main()
{
    int n,a[100],c=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
               printf("%d",a[i]);
                a[j]=-1;
            }
        }
       
        }
    }
}