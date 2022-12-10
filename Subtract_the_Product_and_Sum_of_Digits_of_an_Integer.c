#include<stdio.h>
int main()
{
    int a,n,dig,pro=1,sum=0;
    scanf("%d",&a);
    while(a>0)
    {
      dig=a%10;
      sum += dig;
      pro *= dig;
      a=a/10;
    }
    n=pro-sum;
    printf("%d",n);
}