#include<stdio.h>
int fun(int n)
{
    int s=0,x;
    while(n!=0)
    {
    x=n%10;
    s=s+x;
    n=n/10;
    }
    return s;
}

int main()
{
    int n,i,f;
    scanf("%d",&n);
    while(n>10)
    {
        f=fun(n);
        n=f;
    }
    printf("%d",f);
}