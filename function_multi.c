#include <stdio.h>
int multi(int a, int b) 
{
    return a * b;
}

int main() 
{
    int x, y, multiply;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    multiply = multi(x, y);

    printf("Multiplication = %d\n", multiply);

    return 0;
}
