 #include<stdio.h>
int main()
{
    int i,n,x=0,c=0,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        while(a[i]!=0)
        {
           a[i]= a[i]/10;
           c++;
        }
        if(c%2==0)
        {
           x++;
        }
        c=0;
    }
    printf("%d ",x);
}