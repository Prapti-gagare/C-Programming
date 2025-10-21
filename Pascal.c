#include <stdio.h>

int main() 
{
    int rows;
    printf("Enter number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
     {
        int num = 1;
        for (int space = 0; space < rows - i - 1; space++)
         {
            printf("  ");
        }

        for (int j = 0; j <= i; j++)
         {
            printf("%4d", num);
      
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
