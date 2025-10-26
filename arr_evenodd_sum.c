#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i;
    int *arr;
    int even_sum = 0, odd_sum = 0;

    printf("Enter the size of the array: ");
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
            even_sum += arr[i];
        else
            odd_sum += arr[i];
    }

    printf("Difference (even-indexed sum - odd-indexed sum) = %d\n", even_sum - odd_sum);

    free(arr);

    return 0;
}
