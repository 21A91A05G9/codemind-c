#include<stdio.h>
#include<math.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    if(n<0)
    {
        printf("-");
    }
    while(n!=0)
    {
        d=abs(n)%10;
        if(d!=0)
        {
            printf("%d",d);
        }
        n=n/10;
    }
}