#include<stdio.h>
int main()
{
    int n=3,i,pro=1;
    int a[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        pro=pro*a[i];
    }
    printf("%dKB",pro);
}