#include <stdio.h>

int main() 
{
    int a, b, multi;
    int *p1, *p2;  

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    multi = *p1 * *p2;

    printf("Value of a = %d\n", *p1);
    printf("Value of b = %d\n", *p2);
    printf("Sum = %d\n", multi);

    return 0;
}
