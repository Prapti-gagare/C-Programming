#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two distinct integers:\n");
    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);
    if (num1 == num2) {
        printf("Numbers are not distinct. Please run the program again.\n");
        return 1;
    }
    int larger = (num1 > num2) ? num1 : num2;

    printf("The larger number is: %d\n", larger);

    return 0;
}
