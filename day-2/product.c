#include <stdio.h>
int main()
{
    int a,num,prod=1;
    printf("enter a number");
    scanf("%d",&num);
    while(num!=0)
    {
        a=num%10;
        prod=prod*a;
        num=num/10;
    }
    printf("the product of digits is:%d",prod);
    return 0;
}