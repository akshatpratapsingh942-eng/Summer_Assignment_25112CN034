#include <stdio.h>
int main()
{
int i ,n, prod;
    printf("enter the number whose table to be printed");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        prod=n*i;
     printf("%d * %d = %d\n",n,i,prod);   
    }
    
    return 0;
}
