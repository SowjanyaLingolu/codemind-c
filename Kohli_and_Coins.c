#include<stdio.h>
int main()
{
    int a,x,y,z;
    scanf("%d",&a);
    if(a%10==0 && a%5==0)
    {
        x=a/10;
        printf("%d",x);
    }
    else if( a%10!=0 && a%5==0)
    {
        y=a/10;
        z=(a-10*y)/5;
        x=y+z;
        printf("%d",x);
    }
    else
    {
        printf("-1");
    }
}