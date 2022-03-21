
#include<stdio.h>
int main()
{
    int n,i,d[100],k,j,f=0;
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
        d[i]=n%10;
        n=n/10;
        i++;
    }
    for(j=0;j<=i;j++)
    {
        for(k=0;k<=i;k++)
        {
            
            if(d[j]==d[k] && j!=k)
            {
                printf("Not Unique Number");
                f=1;
                break;
            }
        }
        if(f==1)
        {
            break;
        }
    }
    if(f==0)
    {
        printf("Unique Number");
    }
}