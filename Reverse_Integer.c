#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        printf("-");
    }
    int d,x;
    x=abs(n);
    while(x>0)
    {
        d=x%10;
        if(d!=0)
        {
            printf("%d",d);
        }
        x=x/10;
    }
}