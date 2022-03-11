#include<stdio.h>
int main()
{
    int n,s=0,a[100][100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        j=0;
        while(j<2)
        {
            scanf("%d",&a[i][j]);
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        j=0;
         while(j<2)
         {
             s=s+a[i][j];
             j++;
         }
         printf("%d
",s);
         s=0;
    }
}