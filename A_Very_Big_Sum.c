#include<stdio.h>
int main()
{
    long long int a[100],n,i,s=0;
    scanf("%llu",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%llu",s);
}