#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],sq,s=0,i,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=sqrt(a[i]);
        if(a[i]==m*m)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}