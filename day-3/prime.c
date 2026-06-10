#include <stdio.h>
int main()
{
    int i,n,isprime=1;
    printf("enter a number");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime==1)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
    return 0;
}