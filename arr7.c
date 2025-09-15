#include <stdio.h>

int main()
 {
    int dividend, divisor, remainder;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    remainder = dividend % divisor;

    printf("The remainder when %d is divided by %d is %d\n", dividend, divisor, remainder);

    return 0;
}
