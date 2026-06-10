#include <stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    printf("enter a range:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("the fibonacci series is:%d",a);
    }
    else if(n==2)
    {
        printf("the fibonacci series is:%d,%d",a,b);
    }
    else
    {
        printf("the fibonacci series is:%d\n%d\n",a,b);
        for(i=3;i<=n;i++)
        {
            c=a+b;
            printf("%d\n",c);
            a=b;
            b=c;
        }
    }
    return 0;
}