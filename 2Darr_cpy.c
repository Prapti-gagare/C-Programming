#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i;
    int *arr1, *arr2;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr1 = (int *)malloc(n * sizeof(int));
    arr2 = (int *)malloc(n * sizeof(int));

    if (arr1 == NULL || arr2 == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
     {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++) 
    {
        arr2[i] = arr1[i];
    }

    
    printf("\nFirst array: ");
    for (i = 0; i < n; i++)
     {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond array (copied): ");
    for (i = 0; i < n; i++)
     {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    free(arr1);
    free(arr2);

    return 0;
}
