#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,r1,r2,sq,rev1=0,rev2=0,rem1,rem2;
    scanf("%d",&n);
    temp=n*n;
    while(temp!=0)
    {
        rem1=temp%10;
        rev1=rev1*10+rem1;
        temp=temp/10;
    }
    sq=sqrt(rev1);
    while(sq!=0)
    {
        rem2=sq%10;
        rev2=rev2*10+rem2;
        sq=sq/10;
    }
    if(rev2==n)
    printf("True");
    else
    printf("False");
}