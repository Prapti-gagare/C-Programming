#include <stdio.h>

int main() 
{
    int n, i, j;

    printf("Enter number of elements in the first row: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int size = n;
    while (size > 0) 
    {
        for (i = 0; i < size; i++) 
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

        for (i = 0; i < size - 1; i++) 
        {
            arr[i] = arr[i] + arr[i + 1];
        }

        size--;
    }

    return 0;
}
