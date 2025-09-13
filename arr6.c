#include <stdio.h>

int main()
 {
    int n, i;
    float array[100];

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid input. Please enter a number between 1 and 100.\n");
        return 1;
    }
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%f", &array[i]);
    }
    float min = array[0];
    for (i = 1; i < n; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("The smallest element is: %.2f\n", min);

    return 0;
}
