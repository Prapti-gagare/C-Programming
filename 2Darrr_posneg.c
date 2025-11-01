#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int n, i, posCount = 0, negCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    int *arr = (int *)malloc(n * sizeof(int));

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

    
    int *posArr = (int *)malloc(posCount * sizeof(int));
    int *negArr = (int *)malloc(negCount * sizeof(int));

    if (posArr == NULL || negArr == NULL)
     {
        printf("Memory allocation failed!\n");
        free(arr);
        return 1;
    }


    int p = 0, q = 0;
    for (i = 0; i < n; i++)
     {
        if (arr[i] >= 0)
            posArr[p++] = arr[i];
        else
            negArr[q++] = arr[i];
    }

    
    printf("\nPositive numbers: ");
    for (i = 0; i < posCount; i++)
        printf("%d ", posArr[i]);

    printf("\nNegative numbers: ");
    for (i = 0; i < negCount; i++)
        printf("%d ", negArr[i]);

  
    free(arr);
    free(posArr);
    free(negArr);

    return 0;
}
