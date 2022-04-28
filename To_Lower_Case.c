#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,x;
    scanf("%[^
]",ch);
    for(i=0;i<strlen(ch);i++)
    {
        x=tolower(ch[i]);
            printf("%c",x);
    }
}