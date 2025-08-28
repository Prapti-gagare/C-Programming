#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    printf("This program sums numbers. Enter 0 to stop.\n");

    do {
        printf("Enter a number: ");
        scanf("%d", &number);
        sum += number;
    } while (number != 0);

    printf("Total sum: %d\n", sum);

    return 0;
}
