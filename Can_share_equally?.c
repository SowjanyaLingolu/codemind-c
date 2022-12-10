#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d%d",&a,&b);
    if(a!=0)
    {
        if(a%2==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        if(b%2==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}