#include<stdio.h>
int main()
{
   long int x;
    scanf("%ld",&x);
    if(x>0)
    {
        printf("%ld ",x/10);
    }
    else
    {
        if(x%10==0)
        {
            printf("%ld ",x/10);
        }
        else
        {
            x=x/10;
            printf("%ld ",x-1);
        }
    }
}