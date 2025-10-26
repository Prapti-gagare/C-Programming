#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int n, i;
    int *arr, *pos, *neg;
    int posCount = 0, negCount = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
     {
        if (arr[i] >= 0)
            posCount++;
        else
            negCount++;
    }
    pos = (int*) malloc(posCount * sizeof(int));
    neg = (int*) malloc(negCount * sizeof(int));

    if (pos == NULL || neg == NULL)
     {
        printf("Memory allocation failed!\n");
        free(arr);
        return 1;
    }

   
    int p = 0, ng = 0;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] >= 0)
            pos[p++] = arr[i];
        else
            neg[ng++] = arr[i];
    }

    printf("\nPositive numbers:\n");
    for (i = 0; i < posCount; i++)
        printf("%d ", pos[i]);

    printf("\n\nNegative numbers:\n");
    for (i = 0; i < negCount; i++)
        printf("%d ", neg[i]);
    free(arr);
    free(pos);
    free(neg);

    return 0;
}
