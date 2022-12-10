#include<stdio.h>
int main()
{
    int a,d,sum=0,pro=1;
    scanf("%d",&a);
    for(;a>0;)
    {
        d=a%10;
        sum=sum+d;
        pro=pro*d;
        a=a/10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}