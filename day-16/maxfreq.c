#include <stdio.h>

int main() 
{
    int n, i, j;
    
    printf("Enter the range: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxfreq = 0, maxelem;

    for(i = 0; i < n; i++) 
    {
        int count = 1;

        for(j = i + 1; j < n; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                count++;
            }
        }

        if(count > maxfreq) 
        {
            maxfreq = count;
            maxelem = arr[i];
        }
    }

    printf("Element with maximum frequency: %d\n", maxelem);
    printf("Frequency: %d\n", maxfreq);

    return 0;
}