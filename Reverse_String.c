#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i;
    scanf("%[^
] ",ch);
    for(i=strlen(ch)-1;i>=0;i--)
    {
         printf("%c",ch[i]);
    }
}