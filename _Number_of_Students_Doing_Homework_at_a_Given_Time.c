#include<stdio.h>
int main()
{
    int s[100],e[100],q,i,j,n,m,x,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&e[i]);
    }
    scanf("%d",&x);
    i=0;
  
    while(i<n)
    {
        for(j=s[i];j<=e[i];j++)
        {
            if(j==x)
            {
                c++;
                break;
            }
        }
        i++;
    }
    printf("%d",c);
}