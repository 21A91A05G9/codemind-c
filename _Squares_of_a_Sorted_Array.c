#include<stdio.h>
int fun(int*b,int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
}
int main()
{
	int i,j,n,t,a[100],b[100],k=0,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	    b[i]=a[i]*a[i];
	}
	fun(b,n);
	for(k=0;k<n;k++)
	printf("%d ",b[k]);
}