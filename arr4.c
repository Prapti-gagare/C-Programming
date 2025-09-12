#include <stdio.h>

int main() {
    int n, i, multiplier;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the multiplier: ");
    scanf("%d", &multiplier);
    for(i = 0; i < n; i++) {
        arr[i] = arr[i] * multiplier;
    }

    printf("Array after multiplication:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
