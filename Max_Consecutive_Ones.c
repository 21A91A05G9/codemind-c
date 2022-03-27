#include<stdio.h>
int main()
{
    int n,a[100],i,c=1,j,k=0,d[30],max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            if(a[i]==a[i+1])
            {
                c++;
            }
            if(a[i]!=a[i+1])  
             { d[k]=c;
                 k++;
                 c=1;   }  
        }
    }
    for(j=0;j<=k;j++)
    {
        if(d[j]>max)
        {
            max=d[j];
        }
    }
    printf("%d",max);
}