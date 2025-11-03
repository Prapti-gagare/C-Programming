#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i;
    int *arr;
    int evenSum = 0, oddSum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
     {
        printf("Memory allocation failed!\n");
        return 1;
    }


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) 
    {
        if (i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    int diff = evenSum - oddSum;

    printf("Sum of even-indexed elements = %d\n", evenSum);
    printf("Sum of odd-indexed elements = %d\n", oddSum);
    printf("Difference (even - odd) = %d\n", diff);

    free(arr);

    return 0;
}
