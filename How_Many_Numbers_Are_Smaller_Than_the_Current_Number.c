#include<stdio.h>
int main()
{
    int i,n,j,c=0,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i]>a[j])
        {
            c++;
        }
    }
      printf("%d ",c);
      c=0;
}
}   