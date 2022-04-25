#include<stdio.h>
int main()
{
    int n,a[100][100],i,j,c=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {c=0;
        for(int j=a[i][0];j<=a[i][1];j++)
        {
            d=j%10;
            if(d==2) c++;
            if(d==3)  c++;
            if(d==9)  c++;
        }
        printf("%d
",c);
    }
}