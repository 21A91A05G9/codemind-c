#include<stdio.h>
int main()
{
    int n,a[100],i,j,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<n;j++)
        {
            if(a[i]!=a[j])
            {
                p=p*a[j];
            }
        }
        printf("%d ",p);
        p=1;
    }
}