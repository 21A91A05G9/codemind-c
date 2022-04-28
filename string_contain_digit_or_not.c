#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,s=0,x,f=0;
    scanf("%s ",ch);
    for(i=0;i<strlen(ch);i++)
    {
        x=ch[i]-48;
        for(int j=0;j<=9;j++)
        {
            if(x==j)
            {
                s++;
                f=1;
                break;
            }
        }
    }
    if(f==1)
    printf("Contains %d digit",s);
    else
    printf("Doesn't contain digit");
}