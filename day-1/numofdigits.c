#include <stdio.h>
#include <stdio.h>

int main()
{
    int n, c = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
        c = 1;
    else
    {
        while (n != 0)
        {
            c++;
            n = n / 10;
        }
    }

    printf("The number of digits is %d\n", c);

    return 0;
}