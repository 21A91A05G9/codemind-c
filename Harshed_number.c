#include<stdio.h>
int main()
{
    int n,s=0,d,x;
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        d=n%10;
        s+=d;
        n=n/10;
    }
    if(x%s==0)
    printf("True");
    else
    printf("False");
}