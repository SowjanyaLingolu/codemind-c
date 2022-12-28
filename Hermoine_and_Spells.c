#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        x=b+c;
    }
    else if(b<c && b<a)
    {
        x=c+a;
    }
    else
    {
        x=a+b;
    }
    printf("%d",x);
}