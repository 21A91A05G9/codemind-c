#include<stdio.h>
int main()
{
    int i,j,r,c,a[100][100],max=0;
    scanf("%d%d",&c,&r);
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
       for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            max=max+a[i][j];
        }
    }
    printf("%d",max);
}