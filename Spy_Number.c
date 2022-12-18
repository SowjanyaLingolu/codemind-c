#include<stdio.h>
int main()
{
    int a,i,sum=0,pro=1,dig;
    scanf("%d",&a);
    while(a!=0)
    {
        dig=a%10;
        sum=sum+dig;
        pro=pro*dig;
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