#include <stdio.h>
#include <math.h>

struct Complex
 {
    float real;
    float imag;
};

int main() 
{
    struct Complex c;
    float modulus;

    printf("Enter real part: ");
    scanf("%f", &c.real);

    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);

    modulus = sqrt((c.real * c.real) + (c.imag * c.imag));

    printf("Modulus = %.2f\n", modulus);

    return 0;
}
