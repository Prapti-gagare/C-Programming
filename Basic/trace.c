#include <stdio.h>

int main()
 {
    int matrix[10][10];
    int i, j, n;
    int trace = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
     {
        for (j = 0; j < n; j++)
         {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) 
    {
        trace += matrix[i][i];
    }

    printf("\nTrace of the matrix = %d\n", trace);

    return 0;
}
