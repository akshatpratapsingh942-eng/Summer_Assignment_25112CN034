#include <stdio.h>

int main()
{
    int bin;
    int dec = 0, base = 1, dig;

    printf("Enter a binary number: ");
    scanf("%d", &bin);

    while (bin > 0)
    {
        dig = bin % 10;
        dec += dig * base;
        base *= 2;
        bin /= 10;
    }

    printf("Decimal = %d\n", dec);

    return 0;
}