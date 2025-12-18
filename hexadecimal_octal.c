#include <stdio.h>

int main() 
{
    char hex[20];
    int decimal = 0, i = 0;
    int octal[20], j = 0;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

  
    while (hex[i] != '\0')
     {
        decimal *= 16;

        if (hex[i] >= '0' && hex[i] <= '9')
            decimal += hex[i] - '0';
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            decimal += hex[i] - 'A' + 10;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            decimal += hex[i] - 'a' + 10;

        i++;
    }

 
    while (decimal > 0)
     {
        octal[j++] = decimal % 8;
        decimal /= 8;
    }

    printf("Octal equivalent: ");
    for (i = j - 1; i >= 0; i--)
        printf("%d", octal[i]);

    return 0;
}
