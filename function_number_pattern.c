#include <stdio.h>

void printTriangle(int n)
 {
    int i, j;
    for (i = 1; i <= n; i++)
     {
        for (j = 1; j <= i; j++) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
 {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printTriangle(n);
    return 0;
}
