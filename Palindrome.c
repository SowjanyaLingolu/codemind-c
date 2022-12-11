#include<stdio.h>
int main()
{
    int a,i,r,sum=0,temp;
    scanf("%d",&a);
    temp=a;
    while(a!=0)
    {
      r=a%10;
      sum=(sum*10)+r;
      a=a/10;
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}