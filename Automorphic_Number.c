#include<stdio.h>
int main()
{
    int num,temp,square,count=1;
    scanf("%d",&num);
    temp=num;
    square=num*num;
    while(num!=0)
    {
        count=count*10;
        num=num/10;
    }
    if(square%count==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}