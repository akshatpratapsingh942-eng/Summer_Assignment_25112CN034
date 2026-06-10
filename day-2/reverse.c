#include <stdio.h>
int main()
{
    int rev=0,r,num;
    printf("enter a number");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    printf("the reverse of a number is:%d",rev);
    return 0;
}