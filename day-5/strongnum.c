#include <stdio.h>
int main()
{
    int i,n,a,b,c,num,sum=0;
    int fact=1;
    printf("enter a number:");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
    a=n%10;
    int fact=1;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    sum=sum+fact;
    n=n/10;
}
    if(sum==num)
    {
        printf("the number %d is a strong number",num);
    }
    else
    {
        printf("the number %d is not a strong number",num);
    }

return 0;
}

    