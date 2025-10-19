#include <stdio.h>

int main() 
{
    float a, b, c;
    printf("Enter three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("The triangle is valid.\n");
    } else 
    {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}
