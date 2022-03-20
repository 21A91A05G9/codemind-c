#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s=1,d,t;
    scanf("%d",&n);
    t=n;
    i=0;
   for(i=2;i<sqrt(n);i++)
   {
       if(n%i==0)
       {
           s=s+i+n/i;
       }
   }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}