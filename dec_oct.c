#include <stdio.h>

int main() 
{
    int decimal, octal = 0, place = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0)
     {
        remainder = decimal % 8;
        octal = octal + remainder * place;
        decimal = decimal / 8;
        place = place * 10;
    }

    printf("Octal number = %d\n", octal);

    return 0;
}
