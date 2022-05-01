#include<stdio.h>
int main()
{
    int t,i,j,a[100][100],x=1,s=0,p,q,f=0;
    scanf("%d",&t);
    int n[t],k[t];
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&n[i],&k[i]);
        for(j=1;j<=n[i];j++)
        scanf("%d",&a[i][j]);
    }
    for(i=1;i<=t;i++)
    {
    	s=0;
    	x=1;
    	f=0;
        for(j=1;j<=n[i];j++)
        {
            s+=a[i][j];
            if(s==k[i])
            {
                p=x;
                q=j;
                f=1;
               printf("%d %d
",p,q);
               break;
            }
            if(j==(n[i]))
            {
                j=x++;
                s=0;
            }
        }
    if(f==0)
    printf("-1
");
    }
}