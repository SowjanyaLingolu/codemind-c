#include<stdio.h>
int main()
{
    int n,d,dig,sum=0,pro=1;
    scanf("%d",&n);
    while(n!=0)
    {
        dig=n%10;
        sum=sum+dig;
        pro=pro*dig;
        d=pro-sum;
        n=n/10;
    }
    printf("%d",d);
}