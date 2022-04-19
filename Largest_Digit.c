#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=0,d[n];
    while(n>0)
    {
        d[i]=n%10;
        n=n/10;
        i++;
    }
    int max=0;
    for(int j=0;j<i;j++)
    {
        if(d[j]>max)
        {
            max=d[j];
        }
    }
    printf("%d",max);
}