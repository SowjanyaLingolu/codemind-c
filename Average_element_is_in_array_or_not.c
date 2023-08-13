#include<stdio.h>
int main()
{
    int n,a=0,i,arr[100],x=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
            a=a+arr[i];
    }
    avg=a/n;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            x=1;
        }
    }
    if(x==1)
    printf("True");
    else
    printf("False");
}