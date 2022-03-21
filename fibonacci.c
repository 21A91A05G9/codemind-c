#include<stdio.h>
int main()
{
    int n,j,x=0,y=1,c;
    scanf("%d",&n);
    printf("%d ",x);
    for(j=0;j<n-1;j++)
    {
      c=x;
      x=x+y;
      printf("%d ",x);
      y=c;
    }
}