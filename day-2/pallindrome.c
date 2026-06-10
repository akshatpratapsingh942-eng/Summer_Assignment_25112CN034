#include <stdio.h>
int main()
{
    int rev=0,r,num,n;
    printf("enter a number");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    if(n!=rev)
    printf("number is not pallindrome");
    else
    printf("number is pallindrome");
    return 0;
}