#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 3, 7, 9, 1, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    printf("Duplicate elements are:\n");

    for (i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] == -1)
            continue;

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; 
            }
        }

        if (count > 1) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
