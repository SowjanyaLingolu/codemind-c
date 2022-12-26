#include<stdio.h>
int main()
{
    int n,c,i,d=0,g=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            d=d+a[i];
        }
        else
        {
            g+=a[i];
        }
    }
     if(d>g)
    c=d-g;
    else
    c=g-d;
    printf("%d",c);
}