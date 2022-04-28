#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,a,b;
    scanf("%[^
] ",ch);
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
         printf("%c",ch[i]);
    }
}