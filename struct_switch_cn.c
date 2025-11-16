#include <stdio.h>
#include <math.h>
struct Complex 
{
    float real;
    float imag;
};

int main() 
{
    struct Complex c1, c2, result;
    int choice;

    printf("Enter first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    printf("\nChoose Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Modulus of first number\n");
    printf("5. Modulus of second number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) 
    {
        case 1:   
            result.real = c1.real + c2.real;
            result.imag = c1.imag + c2.imag;
            printf("Addition = %.2f + %.2fi\n", result.real, result.imag);
            break;

        case 2:
            result.real = c1.real - c2.real;
            result.imag = c1.imag - c2.imag;
            printf("Subtraction = %.2f + %.2fi\n", result.real, result.imag);
            break;

        case 3: 
            result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
            result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
            printf("Multiplication = %.2f + %.2fi\n", result.real, result.imag);
            break;

        case 4:   
            printf("Modulus of first = %.2f\n", sqrt(c1.real*c1.real + c1.imag*c1.imag));
            break;

        case 5:   
            printf("Modulus of second = %.2f\n", sqrt(c2.real*c2.real + c2.imag*c2.imag));
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
