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
    float norm;
    printf("Enter real part: ");
    scanf("%f", &c.real);

    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    norm = sqrt((c.real * c.real) + (c.imag * c.imag));

    printf("The norm (modulus) of the complex number %.2f + %.2fi is: %.2f\n",c.real, c.imag, norm);

    return 0;
}
