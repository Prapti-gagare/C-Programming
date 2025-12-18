#include <stdio.h>

int main()
{
    int octal, decimal = 0, i = 0;
    char hex[20];

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    int temp = octal;
    int power = 1;

    while (temp > 0)
    {
        decimal += (temp % 10) * power;
        power *= 8;
        temp /= 10;
    }

    i = 0;
    temp = decimal;

    while (temp > 0)
    {
        int rem = temp % 16;
        if (rem < 10)
            hex[i++] = rem + '0';
        else
            hex[i++] = rem + 'A' - 10;

        temp /= 16;
    }

    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);

    return 0;
}
