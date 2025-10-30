#include <stdio.h>

int main() 
{
    int n, i, j;
    int matrix[10][10];
    long long product = 1;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
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
        product *= matrix[i][i];  
    }

    printf("\nMultiplication of diagonal elements = %lld\n", product);

    return 0;
}
