#include <stdio.h>

struct Complex
 {
    float real;
    float imag;
};

int main() 
{
    struct Complex c;
    float value, norm;
    float x, y; 
    float precision = 0.00001;

    printf("Enter real part: ");
    scanf("%f", &c.real);

    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);

    value = (c.real * c.real) + (c.imag * c.imag);

    x = value;
    y = 1.0;

    while (x - y > precision) {
        x = (x + y) / 2;
        y = value / x;
    }

    norm = x;

    printf("Norm (modulus) = %.4f\n", norm);

    return 0;
}
