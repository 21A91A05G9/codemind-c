#include<stdio.h>
int main()
{
    int n,i=0,x[30];
    scanf("%d",&n);
    while(n>0)
    {
     int  d=n%10;
          if(d%2==1)
          {
              x[i]=d*d;
              i++;
          }
          n=n/10;
    }
    for(int j=(i-1);j>=0;j--)
    {
        printf("%d",x[j]);
    }
}