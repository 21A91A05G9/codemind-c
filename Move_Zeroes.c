#include<stdio.h>
int main()
{
    int n,a[100],b[100],i,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            b[k]=a[i];
            k++;
        }
    }
    for(int j=0;j<k;j++)
    {
        printf("%d ",b[j]);
    }
    for(int s=k;s<n;s++)
    {
        printf("0 ");
    }
}