#include <stdio.h>
int sub(int a, int b) 
{
    return a - b;
}

int main() 
{
    int x, y, subtraction;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    subtraction = sub(x, y);

    printf("Subtraction = %d\n", subtraction);

    return 0;
}
