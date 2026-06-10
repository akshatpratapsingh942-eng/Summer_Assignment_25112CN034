#include <stdio.h>

int main()
{
    int n, largest = 2, i, j, isprime;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        if(n % i == 0)  // factor of n
        {
            isprime = 1;

            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    isprime = 0;
                    break;
                }
            }

            if(isprime && i > largest)
            {
                largest = i;
            }
        }
    }

    printf("The largest prime factor is %d\n", largest);

    return 0;
}