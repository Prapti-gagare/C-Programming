#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }
    if (num1 % num2 == 0) {
        printf("%d is a multiple of %d.\n", num1, num2);
    } else {
        printf("%d is not a multiple of %d.\n", num1, num2);
    }
    return 0;
}
