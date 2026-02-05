#include <stdio.h>

void printTriangle(int n) 
{
    char ch = 'A';
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%c ", ch++);
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
