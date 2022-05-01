#include<stdio.h>
int main()
{
    int t,i,j,a[100][100],x,s=0,p,q,f=0;
    scanf("%d",&t);
    int n[t];
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n[i]);
        for(j=1;j<=n[i];j++)
        scanf("%d",&a[i][j]);
    }
   for(i=1;i<=t;i++)
    {
        x=n[i];
        for(j=1;j<=n[i]/2;j++)
        {
            printf("%d %d",a[i][x-j+1],a[i][j]);
        if(j<x/2)
            printf(" ");
        }
        if(n[i]%2==1)
        printf(" %d",a[i][(x/2)+1]);
        printf("
");
    }
}