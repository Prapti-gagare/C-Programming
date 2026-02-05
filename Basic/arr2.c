#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int length = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < length; i += 2) {
        sum += arr[i];
    }

    printf("Sum of elements at even indices: %d\n", sum);
    return 0;
}
