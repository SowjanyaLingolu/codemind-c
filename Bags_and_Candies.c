#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    x=b*c;
    if(a%x==0)
    {
        y=a/x; 
    }
    else 
    {
        z=a/x;
        y=z+1;
    }
    printf("%d",y);
}