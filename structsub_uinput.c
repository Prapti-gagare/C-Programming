#include <stdio.h>

struct complex
{
    double real;
    double img;
};

int main()
{
    struct complex c1, c2, c3;

    printf("Enter real part of first complex number: ");
    scanf("%lf", &c1.real);

    printf("Enter imaginary part of first complex number: ");
    scanf("%lf", &c1.img);

    printf("Enter real part of second complex number: ");
    scanf("%lf", &c2.real);

    printf("Enter imaginary part of second complex number: ");
    scanf("%lf", &c2.img);

    c3.real = c1.real - c2.real;
    c3.img = c1.img - c2.img;

    printf("\nSubtraction = %.2lf - %.2lfi\n", c3.real, c3.img);

    return 0;
}
