#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,s=0,x,f=0;
    scanf("%[^
]",ch);
    for(i=0;i<strlen(ch);i++)
    {
        x=ch[i];
        if(x>s)  s=x;  
    }
    printf("%c",s);
}