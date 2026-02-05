#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0 && number % 2 == 0) {
        printf("The number is positive and even.\n");
    } else {
        printf("The number is not both positive and even.\n");
    }
    return 0;
}
