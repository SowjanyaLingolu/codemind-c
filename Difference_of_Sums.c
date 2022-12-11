#include<stdio.h>
int main()
{
    int a,i,d,n,square,sum=0,rem=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        rem=rem+i;
        d=rem*rem;
        square=i*i;
        sum=sum+square;
    }
    printf("%d",d-sum);
}