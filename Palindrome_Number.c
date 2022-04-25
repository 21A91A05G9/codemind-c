#include<stdio.h>
int main()
{
    int n,s=0,t,a[100],i,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        s=0;
        t=a[i];
        while(a[i]>0)
        {
            d=a[i]%10;
            s=s*10+d;
            a[i]=a[i]/10;
        }
        if(t==s)
        printf("True
");
        else
        printf("False
");
    }
}