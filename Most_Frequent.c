#include<stdio.h>
int main()
{
    int n,a[100],d[100],v[100],r[20],q[20],i,k=0,c=1;
    int m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
       for( int j=0;j<n;j++)
       {
           if(a[i]==a[j] && i!=j)
           {
               c++;
               a[j]=-1;
           }
       }
       d[k]=c;
       v[k]=a[i];
       k++;
       c=1;
        }
    }
    int max=0,val;
     for(int s=0;s<k;s++)
       {
           if(d[s]>max)
           {
               max=d[s];
               val=v[s];
           }
       }
       int z=0;
       for(int s=0;s<k;s++)
       {
          if(max==d[s])
          {
              r[z]=d[s];
              q[z]=v[s];
              z++;
          }
       }
       int min=99999;
       for(int m=0;m<z;m++)
       {
           if(q[m]<min)
           {
               min=q[m];
               val=min;
           }
       }
       printf("%d",val);
}