#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x=sqrt(n);
    if(x*x==n)
    {
        printf("True");
    }
    else
    printf("False");
}