#include <stdio.h>

int main() 
{
    int arr1[100], arr2[100], unionar[200];
    int n1, n2, i, j, k = 0, found;
    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
        unionar[k++] = arr1[i];
    }
    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < n2; i++) 
    {
        found = 0;
        for(j = 0; j < k; j++) 
        {
            if(arr2[i] == unionar[j]) 
            {
                found = 1;
                break;
            }
        }

        if(!found) 
        {
            unionar[k++] = arr2[i];
        }
    }
    printf("Union of arrays:\n");
    for(i = 0; i < k; i++) 
    {
        printf("%d ", unionar[i]);
    }

    return 0;
}