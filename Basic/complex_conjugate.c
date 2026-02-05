#include <stdio.h>

struct Complex
 {
    float real;
    float imag;
};

int main()
 {
    struct Complex c1, conjugate;

    printf("Enter real part: ");
    scanf("%f", &c1.real);

    printf("Enter imaginary part: ");
    scanf("%f", &c1.imag);

    conjugate.real = c1.real;
    conjugate.imag = -c1.imag;

    printf("Original Complex Number = %.2f + %.2fi\n", c1.real, c1.imag);
    printf("Conjugate = %.2f %.2fi\n", conjugate.real, conjugate.imag);

    return 0;
}
