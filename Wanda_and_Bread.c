#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    x=b*c;
    if(a<=x)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}