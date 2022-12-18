#include<stdio.h>
int main()
{
    int a,i,rem,sum=0;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        rem=a%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==a)
    {
        printf("PERFECT");
    }
    else if(sum<a)
    {
        printf("DEFICIENT");
    }
    else
    {
        printf("ABUNDANT");
    }
}