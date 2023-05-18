#include<stdio.h>
int main()
{
    int n,i,sum=0,mul=1,s,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        mul=mul*rem;
        n=n/10;
    }
    s=mul-sum;
    printf("%d",s);
}