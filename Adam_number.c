#include<stdio.h>
int main()
{
    int a,x,r,b,p=0,s=0,q;
    scanf("%d",&a);
    x=a*a;
    int c;
    c=a;
    while (c!=0)
    {
        r=c%10;
        p=p*10+r;
        c=c/10;
    }
    q=p*p;
    while(q!=0)
    {
        b=q%10;
        s=s*10+b;
        q=q/10;
    }
    if(s==x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}