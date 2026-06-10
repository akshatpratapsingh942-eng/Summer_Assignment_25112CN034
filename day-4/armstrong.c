#include <stdio.h>

int main()
{
    int n, n1, n2, d, c = 0;
    int sum = 0, power, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    n1 = n;
    n2 = n;
    while (n1 != 0)
    {
        c++;
        n1 /= 10;
    }
    n1 = n;
    while (n1 != 0)
    {
        d = n1 % 10;
        power = 1;
        for (i = 1; i <= c; i++)
        {
            power *= d;
        }
        sum += power;
        n1 /= 10;
    }

    if (sum == n2)
        printf("%d is an Armstrong number.\n", n2);
    else
        printf("%d is not an Armstrong number.\n", n2);
        return 0;
}