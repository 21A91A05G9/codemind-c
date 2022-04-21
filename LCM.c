#include<stdio.h>
int main()
{
    int n,m,max=0;
    scanf("%d%d",&n,&m);
    max=(n>m)?n:m;
    while(max>0)
    {
    if(max%n==0 && max%m==0)
    {
        printf("%d",max);
        break;
    }
    max++;
    }
}