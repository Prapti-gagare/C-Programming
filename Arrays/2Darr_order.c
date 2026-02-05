#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int n, i, j = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));
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

    int *result = (int*) malloc(n * sizeof(int));
    if (result == NULL) 
    {
        printf("Memory allocation failed!\n");
        free(arr);
        return 1;
    }

    for (i = 0; i < n; i++) 
    {
        if (arr[i] != 0) 
        {
            result[j++] = arr[i];
        }
    }

    while (j < n) 
    {
        result[j++] = 0;
    }

    printf("Array after moving zeros to the end:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", result[i]);
    }
    printf("\n");


    free(arr);
    free(result);

    return 0;
}
