#include<stdio.h>
int main()
{
    int a,b,i,n;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        n=a*i;
        printf("%d x %d = %d
",a,i,n);
    }
}