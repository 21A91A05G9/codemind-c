#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,s=0,x;
    scanf("%[^
]",ch);
    for(i=0;i<strlen(ch);i++)
    {
        x=ch[i]-48;
        for(int j=0;j<=9;j++)
        {
            if(x==j)
            {
                s+=x;
                break;
            }
        }
    }
    printf("%d",s);
}