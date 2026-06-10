#include <stdio.h>

int main()
{
    int dec, bin[100], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);

    if (dec == 0)
    {
        printf("Binary = 0\n");
        return 0;
    }

    while (dec > 0)
    {
        bin[i] = dec % 2;
        dec = dec / 2;
        i++;
    }

    printf("Binary = ");

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);
    }

    printf("\n");

    return 0;
}
