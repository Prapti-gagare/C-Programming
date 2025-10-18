#include <stdio.h>

int main()
 {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[100][100], matrix2[100][100], sum[100][100];
   
    printf("\nEnter elements of Matrix 1:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("matrix1[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nEnter elements of Matrix 2:\n");
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
         {
            printf("matrix2[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
         {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("\nSum of the matrices:\n");
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
