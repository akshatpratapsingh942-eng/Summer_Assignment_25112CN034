#include <stdio.h>

int main()
{
    int x, n, i;
    int res = 1;

    printf("Enter the base x: ");
    scanf("%d", &x);

    printf("Enter the exponent n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        res = res*x;
    }

    printf("the value of %d^%d is %d\n", x, n, res);

    return 0;
}