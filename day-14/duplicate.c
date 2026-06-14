#include <stdio.h>
int main()
{
    int i, j, n, arr[100];

    printf("Enter the range: ");
    scanf("%d", &n);

    printf("Enter the numbers in the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}