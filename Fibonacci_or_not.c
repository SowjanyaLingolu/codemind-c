#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=a+b;
        if(c==n)
        {
            count++;
            break;
        }
        else
        {
        a=b;
        b=c;
        }
    }
    if(count!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}