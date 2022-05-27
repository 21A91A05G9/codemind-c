#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i,d[20],s=0,k=0;
    scanf("%d%d",&n,&x);
    i=0;
    while(n>0)
    {
        d[i]=n%10;
        n=n/10;
        i++;
    }
    
    for(int j=x-1;j>=0;j--)
    {
        s=s*10+d[j];
        k=k*10+d[--i];
    }
    printf("%d",abs(s-k));
}