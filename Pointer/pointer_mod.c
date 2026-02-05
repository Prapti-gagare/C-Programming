#include <stdio.h>

int main() 
{
    int a, b, mod;
    int *p1, *p2;  

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    mod = *p1 % *p2;

    printf("Value of a = %d\n", *p1);
    printf("Value of b = %d\n", *p2);
    printf("Mod = %d\n", mod);

    return 0;
}
