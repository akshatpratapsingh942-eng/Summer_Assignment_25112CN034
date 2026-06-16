#include <stdio.h>

int main() 
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n - 1];
    int actualSum = 0;
    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }
    int expectedSum = n * (n + 1) / 2;
    int missingNumber = expectedSum - actualSum;
    printf("Missing number is: %d\n", missingNumber);
    return 0;
}