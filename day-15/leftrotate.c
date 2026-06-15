#include <stdio.h>
int main() 
{
    int arr[100], n, i, first;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("Enter the elements in array:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    first = arr[0];
    for(i = 0; i < n - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
    printf("Array after rotating left:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}