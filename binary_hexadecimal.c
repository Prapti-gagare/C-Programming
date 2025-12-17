#include <stdio.h>
#include <math.h>

int main()
{
    long long binary;
    int decimal = 0, i = 0, remainder;
    char hex[20];
    int index = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    
    while (binary != 0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * pow(2, i);
        binary = binary / 10;
        i++;
    }

   
    while (decimal != 0)
    {
        remainder = decimal % 16;

        if (remainder < 10)
            hex[index++] = remainder + 48;     
        else
            hex[index++] = remainder + 55;     

        decimal = decimal / 16;
    }

    printf("Hexadecimal number: ");
    for (i = index - 1; i >= 0; i--)
        printf("%c", hex[i]);

    return 0;
}
