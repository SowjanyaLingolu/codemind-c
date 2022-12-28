#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(c<d)
    {
        y=b*c;
        x=y+((a-b)*c);
    }
    else
    {
        y=b*c;
        x=y+((a-b)*d);
    }
    printf("%d",x);
}
