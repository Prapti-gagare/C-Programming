#include <stdio.h>

struct Matrix 
{
    int rows;
    int cols;
    int data[10][10];
};

int main()
 {
    struct Matrix A, B, C;
    int i, j, k;
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &A.rows, &A.cols);

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < A.rows; i++)
     {
        for(j = 0; j < A.cols; j++)
         {
            scanf("%d", &A.data[i][j]);
        }
    }
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &B.rows, &B.cols);
    if(A.cols != B.rows)
     {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < B.rows; i++)
     {
        for(j = 0; j < B.cols; j++)
         {
            scanf("%d", &B.data[i][j]);
        }
    }
    C.rows = A.rows;
    C.cols = B.cols;
    for(i = 0; i < C.rows; i++)
     {
        for(j = 0; j < C.cols; j++)
         {
            C.data[i][j] = 0;
            for(k = 0; k < A.cols; k++)
             {
                C.data[i][j] += A.data[i][k] * B.data[k][j];
            }
        }
    }
    printf("Resultant Matrix ):\n");
    for(i = 0; i < C.rows; i++)
     {
        for(j = 0; j < C.cols; j++)
         {
            printf("%d ", C.data[i][j]);
        }
        printf("\n");
    }

    return 0;
}
