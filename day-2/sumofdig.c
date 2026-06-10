#include <stdio.h>
int main()
{
    int num,sum=0,a;
    printf("enter a number");
    scanf("%d",&num);
    while(num!=0)
    {
        a=num%10;
        sum=sum+a;
        num=num/10;
    }
    printf("the sum of digits is:%d",sum);
    return 0;
}