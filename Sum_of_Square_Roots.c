#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    float s,sum=0;
    for(i=a;i<=b;i++)
    {
        s=sqrt(i);
        sum=sum+s;
    }
    printf("%0.2f",sum);
}