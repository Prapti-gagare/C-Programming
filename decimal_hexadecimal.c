#include <stdio.h>

int main() 
{
    int decimal, remainder;
    char hex[20];
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0) 
    {
        printf("Hexadecimal = 0");
        return 0;
    }

    while (decimal > 0)
     {
        remainder = decimal % 16;

        if (remainder < 10)
            hex[i] = remainder + '0';
        else
            hex[i] = remainder - 10 + 'A';

        decimal = decimal / 16;
        i++;
    }

    printf("Hexadecimal = ");
    for (int j = i - 1; j >= 0; j--)
     {
        printf("%c", hex[j]);
    }

    return 0;
}
