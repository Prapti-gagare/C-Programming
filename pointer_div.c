#include <stdio.h>

int main() 
{
    int a, b, div;
    int *p1, *p2;  

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    div = *p1 / *p2;

    printf("Value of a = %d\n", *p1);
    printf("Value of b = %d\n", *p2);
    printf("division = %d\n", div);

    return 0;
}
