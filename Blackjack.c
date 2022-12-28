#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d%d",&a,&b);
    x=a+b;
    if(x>10)
    {
        c=21-(a+b);
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}