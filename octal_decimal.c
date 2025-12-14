#include <stdio.h>

int main() 
{
    int octal, decimal = 0, base = 1, digit;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    while (octal > 0) 
    {
        digit = octal % 10;      
        decimal = decimal + digit * base;
        base = base * 8;         
        octal = octal / 10;     
    }

    printf("Decimal number = %d\n", decimal);

    return 0;
}
