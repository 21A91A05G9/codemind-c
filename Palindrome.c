#include<stdio.h>
int main()
{
    int n,t,s=0,d;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        d=n%10;
       s=s*10+d;
       n=n/10;
    }
    if(s==t)
    printf("True");
    else
    printf("False");
}