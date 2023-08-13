#include<stdio.h>
int main()
{
    int n,a=0,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            a=a+arr[i];
        }
    }
    printf("%d",a);
}