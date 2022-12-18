#include<stdio.h>
int main()
{
    int a,i,dig,sum=0,square;
    scanf("%d",&a);
    square=a*a;
    while(square!=0)
    {
        dig=square%10;
        sum=sum+dig;
        square=square/10;
    }
    if(sum==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}