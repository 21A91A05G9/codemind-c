#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,s=0,x,y,z;
    scanf("%s ",ch);
    for(i=0;i<strlen(ch);i++)
    {
        x=ch[i];
        if(x==122) z++;
        if(x==111) y++;
    }
     if(z*2==y)  printf("Yes");
     else printf("No");
}