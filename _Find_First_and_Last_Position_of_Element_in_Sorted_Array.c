#include<stdio.h>
int main()
{
    int n,a[100],i,f=0,k,p,q;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            q=i;
        }
        if(a[i]==k && f==0)
        {
          p=i;
          f=1;
        }
    }
    if(f==0)
    {
        printf("-1 -1");
    }
    else
    {
        printf("%d %d",p,q);
    }
}