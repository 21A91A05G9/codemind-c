#include<stdio.h>
int main()
{
    int n,a[100],c=1,i,j,f=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {c=1;
    if(a[i]!=-1)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
            c++;
            a[j]=-1;
            }
        }
    if(c==k)
        {
    printf("%d ",a[i]);    f=1;
        f=1;
        }
        
    }
    }
    if(f==0)
        printf("-1");
}