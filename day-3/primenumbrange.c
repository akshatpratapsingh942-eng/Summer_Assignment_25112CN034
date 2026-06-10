#include <stdio.h>

int main()
{
    int n, i, j, isprime=1;

    printf("Enter the range: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for (i = 2; i <= n; i++)
    {

        isprime=1;

        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }

        if (isprime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}