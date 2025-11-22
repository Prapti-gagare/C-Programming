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
    struct Complex *ptr = &c;
    float norm;

    printf("Enter real part: ");
    scanf("%f", &ptr->real);

    printf("Enter imaginary part: ");
    scanf("%f", &ptr->imag);


    norm = sqrt((ptr->real * ptr->real) + (ptr->imag * ptr->imag));

    printf("Norm of %.2f + %.2fi = %.3f\n", ptr->real, ptr->imag, norm);

    return 0;
}
