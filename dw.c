#include <stdio.h>

int main() {
    int number;
    do {
        printf("Enter a number (0 to quit): ");
        scanf("%d", &number);

        if (number != 0) {
            if (number % 2 == 0)
                printf("%d is even.\n", number);
            else
                printf("%d is odd.\n", number);
        }

    } while (number != 0);

    printf("Program exited.\n");
    return 0;
}
