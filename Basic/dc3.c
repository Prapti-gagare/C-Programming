#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *arr;
    int size, n;
    int sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL)
     {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
     {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] > n) {
            sum += arr[i];
        }
    }
    printf("Sum of elements greater than %d is: %d\n", n, sum);
    free(arr);

    return 0;
}
