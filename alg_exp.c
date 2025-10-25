#include <stdio.h>

int main() 
{
    int x;
    int expression;

    printf("Enter an integer x: ");
    scanf("%d", &x);
    expression = x * x + 2 * x;
    printf("x^2 + 2x = %d\n", expression);

    return 0;
}
