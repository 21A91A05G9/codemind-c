#include<stdio.h>
int main()
{
	int n,m,i,c=0,j;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
	    c=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(i!=1)
		{
		if(c==0)
		{
			printf("%d
",i);
		}
		}
	}
}