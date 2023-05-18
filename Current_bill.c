#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    float c,b,t;
    if(u<=199)
    {
        c=1.20;
    }
    else if(u>=200 && u<400)
    {
        c=1.50;
    }
    else if(u>=400 && u<600)
    {
        c=1.80;
    }
    else if(u>=600)
    {
        c=2.00;
    }
    b=u*c;
    if(b>400)
    {
        t=b+0.15*b;
    }
    else
    {
        t=b+100;
    }
    printf("%.2f",t);
}