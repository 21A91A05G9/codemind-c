#include<stdio.h>
int main()
{
	int W,B,L,C,A,X;
	scanf("%d%d%d%d",&L,&B,&W,&C);
	if((L<=W+W)||(B<=W+W))
	{
		printf("Impossible");
	}
	else
	{
		A=L*B-(L-2*W)*(B-2*W);
		X=A*C;
		printf("%d",X);
	}
}