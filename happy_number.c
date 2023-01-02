#include<stdio.h>
int main()
{
    int a,dig,sum=0;
    scanf("%d",&a);
    while(sum!=1 && sum!=4)
    {
        sum=0;
     while(a>0)
      {
        dig=a%10;
        sum=sum+(dig*dig);
        a=a/10;
       }
       a=sum;
    }
    if(sum==1 || sum==7)
    {
        printf("True");
    }
    else 
    {
        printf("False");
    }
}