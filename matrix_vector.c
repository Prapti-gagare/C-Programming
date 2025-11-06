#include <stdio.h>

int main()
 {
    int m, n, i, j;

    printf("Enter number of rows and cols: ");
    scanf("%d%d", &m,&n);

    int matrix[m][n], vector[m], result[m];

    printf("Enter elements of the %d x %d matrix:\n", m, n);
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++)
         {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter elements of the vector of size %d:\n", n);
    for (j = 0; j < m; j++) 
    {
        scanf("%d", &vector[j]);
    }

    for (i = 0; i < m; i++) 
    {
        result[i] = 0;
    }

    for (i = 0; i < m; i++)
     {
        for (j = 0; j < n; j++) {
            result[i] += matrix[i][j] * vector[i];
        }
    }


    printf("Resultant vector:\n");
    for (i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
