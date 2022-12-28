#include<stdio.h>
int main()
{
    int a,x;
    scanf("%d",&a);
    if(a%4==0)
    {
        x=a/4;
    }
    else 
    {
        x=(a/4)+1;
    }
    printf("%d",x);
    
}