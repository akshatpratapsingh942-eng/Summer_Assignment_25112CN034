#include <stdio.h>
int main()
{
    int a,b,c,x,y,gcd,lcm;
    printf("enter two numbers:");
    scanf("%d,%d",&a,&b);
    x=a;
    y=b;
    while(y!=0)
    {
        c=y;
        y=x%y;
        x=c;
   
    }
    gcd=x;
    lcm=(a*b)/gcd;
    printf("LCM is %d \n",lcm);
    return 0;
}