#include <stdio.h>
int power(int base, int exp) {
    int res = 1;
    for (int i = 1; i <= exp; i++) {
        res *= base;
    }
    return res;
}
int isArmstrong(int num) {
    int original = num, temp = num;
    int digits = 0, sum = 0, rem;

    while (temp > 0) 
    {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0)
    {
        rem = temp % 10;
        sum += power(rem, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}