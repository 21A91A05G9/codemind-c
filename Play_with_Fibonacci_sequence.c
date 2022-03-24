#include<stdio.h>
int main()
{
    int n,i,x=0,y=1,t;
    scanf("%d",&n);
    printf("%d",x);
    i=0;
    while(i<=(n-2))
    {
        t=x;
        x=x+y;
        y=t;
        
        printf(" %d",x);
        i++;
    }
    
}