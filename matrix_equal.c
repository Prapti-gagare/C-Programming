#include <stdio.h>

int main() 
{
    int r, c, i, j;
    int A[10][10], B[10][10];
    int equal = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++)
         {
            scanf("%d", &B[i][j]);
        }
    }

    
    for (i = 0; i < r; i++)
     {
        for (j = 0; j < c; j++) 
        {
            if (A[i][j] != B[i][j]) 
            {
                equal = 0;
                break;
            }
        }
        if (equal == 0)
            break;
    }

    if (equal == 1)
        printf("Matrices are equal.");
    else
        printf("Matrices are not equal.");

    return 0;
}
