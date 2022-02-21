#include<stdio.h>
int main()
{
    int n,i,f=1,j,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    i=0;
    while(i<=n-1)
    {
        for(j=1;j<=a[i];j++)
        {
            f=f*j;
        }
        printf("%d
",f);
        f=1;
      i++;
    }
}