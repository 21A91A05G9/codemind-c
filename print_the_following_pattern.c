#include<stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++)//1,2,3,4,5
{
for(j=1;j<=n-i+1;++j)
//           5,4,3,2,1
{
printf("%d",j);
}
printf("
");
}
}