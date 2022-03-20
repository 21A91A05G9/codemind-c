#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,m,c=2,t=0;
    scanf("%d",&n);
  //  m=sqrt(n);
    for(i=36;i<=n;i++)
 {
     c=2;
     for(j=2;j<=sqrt(i);j++)
     {  if(i%j==0)
     {
       if(j!=i/j)  c+=2;
         else c++;
     }
     }
    
  //printf("%d ",c);
    if(c==9)
    {
    printf("%d ",i);
    t++;
    }
 }
 printf("
Total=%d",t);
}