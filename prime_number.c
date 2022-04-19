#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("not a prime");
    }
    for(i=2;i<=sqrt(n);i++)
    {
        c=0;
        if(n%i==0)
        {
        printf("not a prime");
        c=1;
        break;
        }
        
    }
    if(c==0)
    {
        printf("prime");
    }
}