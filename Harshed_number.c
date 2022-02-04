#include<stdio.h>
int main()
{
    int n,i,sum=0,d,temp;
    scanf("%d",&n);
    temp=n;
    i=0;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
        i++;
    }
  
    if(temp%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}