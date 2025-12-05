#include <stdio.h>

struct Matrix
 {
    int a[10][10];
    int rows;
    int cols;
};

int main()
 {
    struct Matrix m1, m2, sum;
    int i, j;
    printf("Enter number of rows: ");
    scanf("%d", &m1.rows);
    printf("Enter number of columns: ");
    scanf("%d", &m1.cols);
    m2.rows = m1.rows;
    m2.cols = m1.cols;

    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < m1.rows; i++)
     {
        for(j = 0; j < m1.cols; j++)
         {
            scanf("%d", &m1.a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < m2.rows; i++)
     {
        for(j = 0; j < m2.cols; j++) 
        {
            scanf("%d", &m2.a[i][j]);
        }
    }

    for(i = 0; i < m1.rows; i++) 
    {
        for(j = 0; j < m1.cols; j++)
         {
            sum.a[i][j] = m1.a[i][j] + m2.a[i][j];
        }
    }

    sum.rows = m1.rows;
    sum.cols = m1.cols;

    printf("\nSum of matrices:\n");
    for(i = 0; i < sum.rows; i++)
     {
        for(j = 0; j < sum.cols; j++)
         {
            printf("%d ", sum.a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
