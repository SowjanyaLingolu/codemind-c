#include<stdio.h>
int main()
{
    int i,n,I=0,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        if(I<rem)
        {
            I=rem;
        }
        n=n/10;
    }
    printf("%d",I);
}