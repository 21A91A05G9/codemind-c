#include<stdio.h>
int main()
{
    int n,d,i;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        printf("%d",d);
        n=n/10;
    }
}