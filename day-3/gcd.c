#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers:");
    scanf("%d,%d",&a,&b);
    while(b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    printf("GCD is %d\n",a);
    return 0;
}