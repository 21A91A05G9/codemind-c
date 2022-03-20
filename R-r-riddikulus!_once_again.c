#include<stdio.h>
int main()
{
	int n,i,m,a[100],k;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		//if(a[i]==n)
		{
		//	k=i;
		//	break;
		}
	}
	for(i=(n);i<m;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);//5 4 3 2 1 9 8 7 6 	5 1 2 3 4   5 4 3 2 1 9 8 7 6
	}
}