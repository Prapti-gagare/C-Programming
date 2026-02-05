#include <stdio.h>

int main()
 {
    int rows, cols, i, j, num;

    
    printf("Enter number of rowsand cols : ");
    scanf("%d%d", &rows,&cols);
    

    int matrix[rows][cols];

    
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Enter the integer value: ");
    scanf("%d", &num);

    printf("\nResultant Matrix:\n");
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < cols; j++)
         {
            printf("%d\t", matrix[i][j] * num);
        }
        printf("\n");
    }

    return 0;
}
