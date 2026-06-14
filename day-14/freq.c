#include <stdio.h>

int main() {
    int arr[100], n, elem, i, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find frequency: ");
    scanf("%d", &elem);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == elem) 
        {
            count++;
        }
    }

    printf("Frequency of %d = %d\n", elem, count);

    return 0;
}