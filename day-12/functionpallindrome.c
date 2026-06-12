#include <stdio.h>
int isPalindrome(int n)
 {
    int original = n;
    int rev = 0, rem;

    while (n > 0) 
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    return (original == rev);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}