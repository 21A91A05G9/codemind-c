#include<stdio.h>
int main()
{
    int n,i,p=1,s=0,d,t;
    scanf("%d",&
    n);
    t=n;
    while(n!=0)
    {
        d=n%10;
        p=1;
        for(i=1;i<=d;i++)
        {
            p=p*i;
        }
        s=s+p;
        n=n/10;
    }
   // printf("%d",s);
    if(t==s)
    {
        printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
    }
}