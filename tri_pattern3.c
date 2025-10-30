#include <stdio.h>

int main() 
{
    int n, i, j, k;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
     {
        
        for (k = i; k < n; k++) 
        {
            printf(" ");
        }


        for (j = 1; j <= i; j++) 
        {
            printf("%d ", j);
        }

        printf("\n");
    }



    for (i = n-1; i >= 1; i--) 
    {
       
        for (k = 0; k < n - i; k++) 
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
         {
            printf("%d ", j);
        }

        printf("\n");
    }


    return 0;
}