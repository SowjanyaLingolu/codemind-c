#include<stdio.h>
int main()
{
    int n,i,sum1=0,sum2=0,p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum1=sum1+a[i];
        }
        else
        {
            sum2=sum2+a[i];
        }
    }
    if(sum1<sum2)
    {
        p=sum2-sum1;
    }
    else
    {
        p=sum1-sum2;
    }
    printf("%d",p);
}