#include <stdio.h>

int main() 
{
    int octal, digit;
    int bin[100], i = 0;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    while (octal != 0)
     {
        digit = octal % 10;

        switch (digit)
         {
            case 0: bin[i++] = 0; break;
            case 1: bin[i++] = 1; break;
            case 2: bin[i++] = 10; break;
            case 3: bin[i++] = 11; break;
            case 4: bin[i++] = 100; break;
            case 5: bin[i++] = 101; break;
            case 6: bin[i++] = 110; break;
            case 7: bin[i++] = 111; break;
        }
        octal /= 10;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%03d", bin[j]);
    }

    return 0;
}
