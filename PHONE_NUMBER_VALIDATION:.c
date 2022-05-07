#include<stdio.h>
int main()
{
   long int n,i=0,d[100];
    scanf("%ld",&n);
    i=0;
    while(n>0)
    {
        d[i]=n%10;
        n=n/10;
        i++;
        
    }
    if(i==10 && d[0]!=0)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}