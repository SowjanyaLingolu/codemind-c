#include<stdio.h>
int main()
{
    int n,a,x=0,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for (i=0;i<n;i++)
    {
        if(a==arr[i])
        {
            x=1;
        }
    }
    if(x==1)
    printf("True");
    else
    printf("False");
}