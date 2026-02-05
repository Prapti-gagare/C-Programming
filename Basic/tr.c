#include <stdio.h>

int main()
 {
    int a, b, max;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;

    printf("The larger number is: %d\n", max);

    return 0;
}
