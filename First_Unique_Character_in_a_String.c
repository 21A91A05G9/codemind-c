#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,j,c=0,f=0;
    scanf("%[^
]",ch);
    for(i=0;i<strlen(ch);i++)
    {c=0;
        for(j=0;j<strlen(ch);j++)
        {
            if(ch[i]==ch[j] && i!=j)  
            {c=1;  break;   }
        }
        if(c==0) { printf("%d",i);  f=1;
        break; }
    }
    if(f==0)   printf("-1");
}