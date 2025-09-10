#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    if (num == 0) {
        product = 0;
    } else {
        while (num > 0) {
            digit = num % 10;       // Get the last digit
            product *= digit;       // Multiply the digit
            num /= 10;              // Remove the last digit
        }
    }

    printf("Product of digits: %d\n", product);

    return 0;
}
