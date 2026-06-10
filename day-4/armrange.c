#include <stdio.h>
int main()
{
    int startnum, endnum, n, temp, d;
    int c, sum, power, i;
    printf("Enter starting number: ");
    scanf("%d", &startnum);
    printf("Enter ending number: ");
    scanf("%d", &endnum);
    for (n = startnum; n <= endnum; n++)
    {
        temp = n;
        c = 0;
        while (temp != 0)
        {
            c++;
            temp /= 10;
        }
        temp = n;
        sum = 0;
        while (temp != 0)
        {
            d = temp % 10;
            power = 1;
            for (i = 1; i <= c; i++)
            {
                power *= d;
            }
            sum += power;
            temp /= 10;
        }
        if (sum == n)
        {
            printf("%d ", n);
        }
    }
    return 0;
}