#include <stdio.h>

int main() 
{
    int n, i, j, num = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int row = 1;
    while (num <= n)
     {
        for (j = 1; j <= row; j++) 
        {
            if (num > n)
                break;
            printf("%d ", num);
            num++;
        }
        printf("\n");
        row++;
    }

    return 0;
}
