
#include <stdio.h>
int sumOfDigits(int n) 
{
    if (n == 0)
    return 0;  
    else if(n == 1)
    return 1;
    else
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits is %d\n", sumOfDigits(num));

    return 0;
}