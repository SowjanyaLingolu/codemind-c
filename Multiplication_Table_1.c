#include<stdio.h>
int main()
{
    int a,i,n;
    scanf("%d",&a);
    for(i=1;i<=12;i++)
    {
        n=a*i;
        printf("%d x %d = %d
",a,i,n);
    }
}