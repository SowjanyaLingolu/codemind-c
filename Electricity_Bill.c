#include<stdio.h>
int main()
{
    int a;
    float x,b,s,y;
    scanf("%d",&a);
    if(a<=199)
    {
        x=1.20;
        b=a*x;
        s=0;
        y=b+s;
    }
    else if(a>=200 && a<400)
    {
        x=1.40;
        b=a*x;
        s=0;
        y=b+s;
    }
    else if(a>=400 && a<600)
    {
        x=1.60;
        b=a*x;
        s=b*0.15;
        y=b+s;
    }
    else if(a>=600 && a<800)
    {
        x=1.80;
        b=a*x;
        s=b*0.15;
        y=b+s;
    }
    else
    {
        x=2.00;
        b=a*x;
        s=b*0.15;
        y=b+s;
    }
    printf("Units Consumed: %d
Cost per Unit: %0.2f
Bill: %0.2f
Surcharge: %0.2f
Total Amount: %0.2f
",a,x,b,s,y);
}