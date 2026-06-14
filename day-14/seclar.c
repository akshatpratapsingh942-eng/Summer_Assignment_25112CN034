#include <stdio.h>

int main() {
    int arr[100], n, i;
    int lar, secLar;

    printf("Enter the range: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Second largest element does not exist.\n");
        return 0;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    lar = secLar = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > lar) {
            secLar = lar;
            lar = arr[i];
        }
        else if (arr[i] > secLar && arr[i] != lar) {
            secLar = arr[i];
        }
    }

    if (lar == secLar) {
        printf("Second largest element does not exist.\n");
    } else {
        printf("Second largest element = %d\n", secLar);
    }

    return 0;
}