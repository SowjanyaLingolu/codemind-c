#include<stdio.h>
int main()
{
    int a,dig,rev=0;
    scanf("%d",&a);
    while(a!=0)
    {
        dig=a%10;
        rev=(rev*10)+dig;
        a=a/10;
    }
    printf("%d",rev);
}