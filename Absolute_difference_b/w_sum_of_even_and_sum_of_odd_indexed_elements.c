#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,x=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            s=s+a[i];
        }
        else
        {
            x=x+a[i];
        }
    }
    printf("%d",(abs(s-x)));
}